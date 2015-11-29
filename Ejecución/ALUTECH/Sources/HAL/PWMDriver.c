/*
 * PWMDriver.c
 *
 *  Created on: Nov 5, 2015
 *      Author: LUIS ALFONSO
 */

#include "derivative.h"
#include "PWMDriver.h"
#include "mytypes.h"

void PWM_vdfnDriverInit(){
	//Configuracion del puerto
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;			/* Port B Clock Gate Control (Enabled) */
	PORTB_PCR0 |= PORT_PCR_MUX(3);				/* Pin Mux Control (Alternative 3 = TPM1_CH0) */
	
	//SIM_SOPT2 = SIM_SOPT2_PLLFLLSEL_MASK; 	/* PLL/FLL clock select (MCGFLLCLK clock) */
	SIM_SCGC6 |= SIM_SCGC6_TPM1_MASK;			/* TPM1 Clock Gate Control (Enabled) */
	SIM_SOPT2 = SIM_SOPT2_TPMSRC(1);			/* TPM clock source select (MCGFLLCLK clock or MCGPLLCLK/2) */
		
	TPM1_MOD = 0;
	TPM1_MOD |= TPM_MOD_MOD(50000);				/* Modulo value (0-50000) */
	
	//TPM1_SC |= TPM_SC_DMA_MASK;				/* DMA Enable (Disable DMA transfers) */
	//TPM1_SC |= TPM_SC_TOIE_MASK;				/* Timer Overflow Interrupt Enable (Disable TOF interrupts) */
	TPM1_SC |= TPM_SC_CPWMS_MASK;				/* Center-aligned PWM Select (LPTPM counter operates in up-down counting mode) */
	TPM1_SC |= TPM_SC_CMOD(1);					/* Clock Mode Selection (LPTPM counter increments on every LPTPM counter clock) */
	TPM1_SC |= TPM_SC_PS(7);					/* Prescale Factor Selection (Divide by 128) */
	
	//TPM1_C0SC|= TPM_CnSC_CHIE_MASK;			/* Channel Interrupt Enable (Disable Channel Interrupt) */
	//TPM1_C0SC |= TPM_CnSC_ELSA_MASK;			/* Edge or Level Select */
	//TPM1_C0SC |= TPM_CnSC_MSA_MASK;			/* Channel Mode Select */
	TPM1_C0SC |= TPM_CnSC_ELSB_MASK | 
			TPM_CnSC_MSB_MASK;			/* Edge or Level Select and Channel Mode Select */
	
	TPM1_C0V |= TPM_CnV_VAL(1000); 			/* Channel Value */
	
	TPM1_CNT = 0;							/* Counter Value */
}

void PWM_vdfnModificarOffset(U16 u16Nuevo_offset){
	if (u16Nuevo_offset > MAX_VOLTAGE)
		TPM1_C0V |= TPM_CnV_VAL(MAX_VOLTAGE);
	else if (u16Nuevo_offset < MIN_VOLTAGE)
		TPM1_C0V |= TPM_CnV_VAL(MIN_VOLTAGE);
	else
		TPM1_C0V = TPM_CnV_VAL(u16Nuevo_offset);
}
