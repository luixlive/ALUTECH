/*
 * digitalportsDriver.c
 *
 *  Created on: Nov 26, 2015
 *      Author: LUIS ALFONSO
 */

#include "digitalportsDriver.h"
#include "mytypes.h"
#include "derivative.h"

U08 digitalPorts_vdfnSetPortOutput(PORT_MemMapPtr port, U08 num){
	if (port == PORTA_BASE_PTR){
		SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;		/* Port A Clock Gate Control */
		GPIOA_PDDR |= (1 << num);				/* Port A Data Direction (General-purpose output) */
	}
	else if (port == PORTB_BASE_PTR){
		SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;		/* Port B Clock Gate Control */
		GPIOB_PDDR |= (1 << num);				/* Port B Data Direction (General-purpose output) */
	}
	else if (port == PORTC_BASE_PTR){
		SIM_SCGC5 |= SIM_SCGC5_PORTC_MASK;		/* Port C Clock Gate Control */
		GPIOC_PDDR |= (1 << num);				/* Port C Data Direction (General-purpose output) */
	}
	else if (port == PORTD_BASE_PTR){
		SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;		/* Port D Clock Gate Control */
		GPIOD_PDDR |= (1 << num);				/* Port D Data Direction (General-purpose output) */
	}
	else if (port == PORTE_BASE_PTR){
		SIM_SCGC5 |= SIM_SCGC5_PORTE_MASK;		/* Port E Clock Gate Control */
		GPIOE_PDDR |= (1 << num);				/* Port E Data Direction (General-purpose output) */
	}
	else
		return 0;
	PORT_PCR_REG(port, num) = PORT_PCR_MUX(1);	/* Pin MUX Control (Alt. 1: GPIO) */
	return 1;
}

void digitalPorts_vdfnSetOne(GPIO_MemMapPtr port, U08 num){
	GPIO_PDOR_REG(port) |= (1 << num);			/* Port Data Output (Logic level 1 is driven on pin) */
}

void digitalPorts_vdfnSetZero(GPIO_MemMapPtr port, U08 num){
	GPIO_PDOR_REG(port) &= ~(1 << num);			/* Port Data Output (Logic level 0 is driven on pin) */
}
