/*
 * ADCDriver.c
 *
 *  Created on: Oct 31, 2015
 *      Author: LUIS ALFONSO
 */

#include "ADCDriver.h"
#include "derivative.h"
#include "mytypes.h"

/*
 * ADC_vdfnDriverInit: Funcion que configura y calibra el ADC0 para la recepcion adecuada
 * voltajes análogos.
 * return: 1 si al terminar la configuracion, la calibracion fue exitosa; 0 de otro modo.
 */
U08 ADC_u08fnDriverInit(){
	SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;			/* ADC0 Clock Gate Control (Clock enabled) */
	
	//ADC0_SC1A |= ADC_SC1_AIEN_MASK;			/* Interrupt Enable (Conversion complete interrupt disabled) */
	//ADC0_SC1A |= ADC_SC1_DIFF_MASK;			/* Differential Mode Enable (Single-ended conversions and input channels) */
	ADC0_SC1A |= ADC_SC1_ADCH(0);				/* Input channel select (DADP0 is selected as input) */
	
	//ADC0_CFG1 |= ADC_CFG1_ADLPC_MASK;			/* Low Power Configuration (Normal Power Configuration) */
	//ADC0_CFG1 |= ADC_CFG1_ADIV_MASK;			/* Clock Divide Select (Clock rate is input clock) */
	ADC0_CFG1 |= ADC_CFG1_ADLSMP_MASK;			/* Sample Time Configuration (Long sample time) */
	ADC0_CFG1 |= ADC_CFG1_MODE(3);				/* Conversion Mode Selection (16 bit conversion) */
	ADC0_CFG1 |= ADC_CFG1_ADICLK(0);			/* Input Clock Select (Bus clock) */
	
	//ADC0_CFG2 |= ADC_CFG2_MUXSEL_MASK;		/* ADC MUX Select (ADxxa channel) */
	//ADC0_CFG2 |= ADC_CFG2_ADACKEN_MASK;		/* Asynchronous Clock Output Enable (ACO disabled) */
	//ADC0_CFG2 |= ADC_CFG2_ADHSC_MASK;			/* High-Speed Configuration (Normal Conversion Sequence) */
	ADC0_CFG2 |= ADC_CFG2_ADLSTS(0);			/* Long Sample Time Select (Default; 20 extra ADCK cycles) */
	
	//ADC0_SC2 |= ADC_SC2_ADACT_MASK;			/* Conversion Active (Conversion not in progress) */
	//ADC0_SC2 |= ADC_SC2_ADTRG_MASK;			/* Conversion Trigger Select (Software trigger selected) */
	//ADC0_SC2 |= ADC_SC2_ACFE_MASK;			/* Compare Function Enable (Compare function disabled) */
	//ADC0_SC2 |= ADC_SC2_ACFGT_MASK;			/* Compare Function Greater Than Enable (No effects) */
	//ADC0_SC2 |= ADC_SC2_ACREN_MASK;			/* Compare Function Range Enable (No effects) */
	//ADC0_SC2 |= ADC_SC2_DMAEN_MASK;			/* DMA Enable (DMA is disabled) */
	ADC0_SC2 |= ADC_SC2_REFSEL(0);				/* Voltage Reference Selection (Default voltage reference pin pair) */
	
	ADC0_SC3 |= ADC_SC3_ADCO_MASK;				/* Continuous Conversion Enable (Continuous conversions) */
	//ADC0_SC3 |= ADC_SC3_AVGE_MASK;			/* Hardware Average Enable (Hardware average function disabled) */
	ADC0_SC3 |= ADC_SC3_AVGS(0);				/* Hardware Average Select (No effects) */
	ADC0_SC3 |= ADC_SC3_CAL_MASK;				/* Calibration */
	while ((ADC0_SC3 & ADC_SC3_CAL_MASK) != 0)
	if ((ADC0_SC3 & ADC_SC3_CALF_MASK) != 0)
		return 0;
	return 1;
}

U16 ADC_u16fnReadValue(){
	ADC0_SC1A &= (~ADC_SC1_COCO_MASK);
	while (!((ADC0_SC1A & ADC_SC1_COCO_MASK) == ADC_SC1_COCO_MASK));	//Actualizar si se modifica la configuración ADC0_SC1A
  	U16 u16ADC_value = ADC0_RA;
	return u16ADC_value;
}
