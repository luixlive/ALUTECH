/*
 * sensores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "sensores.h"
#include "ADCDriver.h"
#include "mytypes.h"

#define SHORT_LENGTH	(65535)

static U08 u08Driver_ADC_iniciado = 0;

U16 u16fnObtenerIluminacion(){
	while (u08Driver_ADC_iniciado == 0)
		u08Driver_ADC_iniciado = ADC_u08fnDriverInit();
	
	return ADC_u16fnReadValueIlum()*MAX_VOLTAGE/SHORT_LENGTH;	//La funcion Read Value retorna valores de
}																//0 a 65535, así que hacemos la regla de 3
																//para convertirlo de 0 a MAX_VOLTAGE
U16 u16fnObtenerTemperatura(void){
	while (u08Driver_ADC_iniciado == 0)
		u08Driver_ADC_iniciado = ADC_u08fnDriverInit();
	//TODO RETORNAR COMO VALOR DE VOLTAJE MULTIPLICADO POR 100, NO COMO VALOR DE 0 A MAX_VOLTAGE
	return ADC_u16fnReadValueTemp()*MAX_VOLTAGE/SHORT_LENGTH;
}
