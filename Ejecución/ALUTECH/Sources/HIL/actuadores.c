/*
 * actuadores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "actuadores.h"
#include "mytypes.h"

static U16 u16EstadoIluminacion = 0;

U16 u16fnValorIluminacion(){
	return u16EstadoIluminacion;
}

void vdfnCambiarIluminacion(S16 u16Cambio){
	u16EstadoIluminacion += u16Cambio;
	PWM_vdfnModificarOffset(u16EstadoIluminacion);
}
