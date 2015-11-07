/*
 * actuadores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "actuadores.h"
#include "mytypes.h"

#define MAX_EST_ILUM		(65535)

static U16 u16EstadoIluminacion = 0;
static U08 u08Driver_PWM_iniciado = 0;

U16 u16fnValorIluminacion(){
	return u16EstadoIluminacion;
}

void vdfnCambiarIluminacion(S32 s32Cambio){
	if (u08Driver_PWM_iniciado == 0){
		PWM_vdfnDriverInit();
		u08Driver_PWM_iniciado = 1;
	}
	if (u16EstadoIluminacion + s32Cambio < 0)
		u16EstadoIluminacion = 0;
	else if (u16EstadoIluminacion + s32Cambio > MAX_EST_ILUM)
		u16EstadoIluminacion = MAX_EST_ILUM;
	else
		u16EstadoIluminacion += s32Cambio;
	PWM_vdfnModificarOffset(u16EstadoIluminacion);
}
