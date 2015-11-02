/*
 * sensores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "sensores.h"
#include "ADCDriver.h"
#include "mytypes.h"

static U08 u08Driver_ADC_iniciado = 0;

U16 u16fnObtenerIluminacion(){
	while (u08Driver_ADC_iniciado == 0)
		u08Driver_ADC_iniciado = ADC_u08fnDriverInit();
	
	return ADC_u16fnReadValue();
}
