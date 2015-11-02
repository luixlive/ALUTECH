/*
 * actuadores.c
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#include "actuadores.h"
#include "mytypes.h"

#define NUMERO_LEDS			(4)		/* LEDs actuadores en el sistema */
#define ESTADO_ENCENDIDO	(1)		/* Valor del estado encendido de los LED's */
#define ESTADO_APAGADO		(0)		/* Valor del estado apagado de los LED's */

static U08 u08aEstadoIluminacion[] = {ESTADO_APAGADO, ESTADO_APAGADO, ESTADO_APAGADO, ESTADO_APAGADO};

U08 u08fnIluminacionEncendida(U08 u08Id_led){
	if (u08Id_led >= NUMERO_LEDS)	return 0;
	return u08aEstadoIluminacion[u08Id_led];
}

void vdfnEncenderIluminacion(U08 u08Id_led){
	if (u08aEstadoIluminacion[u08Id_led] == ESTADO_ENCENDIDO) return;
	//TODO ENVIAR VOLTAJE AL PIN PARA ENCENDER EL LED INDICADO
	
	u08aEstadoIluminacion[u08Id_led] = ESTADO_ENCENDIDO;
}

void vdfnApagarIluminacion(U08 u08Id_led){
	if (u08aEstadoIluminacion[u08Id_led] == ESTADO_APAGADO) return;
	//TODO ENVIAR VOLTAJE AL PIN PARA APAGAR EL LED INDICADO
	
	u08aEstadoIluminacion[u08Id_led] = ESTADO_APAGADO;
}

void vdfnCambiarIluminacion(S16 u08Cambio, U08 u08Id_led){
	if (u08aEstadoIluminacion[u08Id_led] == ESTADO_APAGADO) return;
	//TODO ENVIAR VOLTAJE AL PIN PARA CAMBIAR ILUMINACION DEACUERDO AL CAMBIO RECIBIDO
}
