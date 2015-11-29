/*
 * actuadores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "actuadores.h"
#include "mytypes.h"

#define ILUM_DESEADA	(43000)	/* Iluminación ambiental deseada por el usuario (min 0, max 50000) */

static U16 u16EstadoIluminacion = 0;
static U08 u08Driver_PWM_iniciado = 0;

void vdfnCambiarIluminacion(S32 s32Cambio){
	if (u08Driver_PWM_iniciado == 0)
		u08Driver_PWM_iniciado = PWM_vdfnDriverInit();
	
	if (u16EstadoIluminacion + s32Cambio < 0)
		u16EstadoIluminacion = 0;
	else if (u16EstadoIluminacion + s32Cambio > MAX_VOLTAGE)
		u16EstadoIluminacion = MAX_VOLTAGE;
	else
		u16EstadoIluminacion += s32Cambio;
	PWM_vdfnModificarOffset(u16EstadoIluminacion);
}

void vdfnControlIluminacion(U16 u16Real){
	S32 s32Error = ILUM_DESEADA - u16Real;
	vdfnCambiarIluminacion(s32Error);
}
