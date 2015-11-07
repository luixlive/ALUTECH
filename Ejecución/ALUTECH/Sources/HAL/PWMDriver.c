/*
 * PWMDriver.c
 *
 *  Created on: Nov 5, 2015
 *      Author: LUIS ALFONSO
 */

#include "derivative.h"
#include "PWMDriver.h"
#include "mytypes.h"

#define MAX_OFFSET			(65535)
#define MIN_OFFSET			(0)

void PWM_vdfnDriverInit(){
	SIM_SOPT2 = SIM_SOPT2_TPMSRC(1);			/* TPM clock source select (MCGFLLCLK clock or MCGPLLCLK/2) */
	
	//TPM1_CnSC(0) |= TPM_CnSC_CHIE_MASK ;		/* Channel Interrupt Enable (Disable Channel Interrupt) */
	//TPM1_CnSC(0) |= TPM_CnSC_ELSA_MASK;		/* Edge or Level Select */
	TPM1_CnSC(0) |= TPM_CnSC_ELSB_MASK;			/* Edge or Level Select */
	//TPM1_CnSC(0) |= TPM_CnSC_MSA_MASK;		/* Channel Mode Select */
	TPM1_CnSC(0) |= TPM_CnSC_MSB_MASK;			/* Channel Mode Select */
	
	//TPM1_SC |= TPM_SC_DMA_MASK;				/* DMA Enable (Disable DMA transfers) */
	//TPM1_SC |= TPM_SC_TOIE_MASK;				/* Timer Overflow Interrupt Enable (Disable TOF interrupts) */
	TPM1_SC |= TPM_SC_CPWMS_MASK;				/* Center-aligned PWM Select (LPTPM counter operates in up-down counting mode) */
	TPM1_SC |= TPM_SC_CMOD(1);					/* Clock Mode Selection (LPTPM counter increments on every LPTPM counter clock) */
	TPM1_SC |= TPM_SC_PS(0);					/* Prescale Factor Selection (Divide by 1) */
	
	TPM1_CNT = 0;								/* Counter Value */
	
	TPM1_MOD |= TPM_MOD_MOD(3000);				/* Modulo value (0-65535) */
	
	TPM1_C1V |= TPM_CnV_VAL(10000); 			/* Channel Value */
}

void PWM_vdfnModificarOffset(U16 u16Nuevo_offset){
	//TODO modificacion de la intensidad del LED
	//AL DEBUGUEAR, EN CUANTO SE TOCAN LOS REGISTROS DE TPM1 LANZA UN "HANDLER" 
	
	if (u16Nuevo_offset > MAX_OFFSET)
		TPM1_C1V |= TPM_CnV_VAL(MAX_OFFSET);
	else if (u16Nuevo_offset < MIN_OFFSET)
		TPM1_C1V |= TPM_CnV_VAL(MIN_OFFSET);
	else
		TPM1_C1V |= TPM_CnV_VAL(u16Nuevo_offset);
}
