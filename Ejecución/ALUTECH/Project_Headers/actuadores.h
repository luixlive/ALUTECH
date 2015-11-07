/*
 * actuadores.h
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef ACTUADORES_H_
#define ACTUADORES_H_

#include "mytypes.h"

/*
 * u16fnValorIluminacion: informa al usuario el valor actual del LED que indique.
 * return: valor en el que se encuentra el LED.
 */
U16 u16fnValorIluminacion();

/*
 * vdfnCambiarIluminacion: modifica la intensidad de brillo del LED indicado, recibe valores entre 0 y 65535.
 * u16Cambio: valor del cambio a realizar en la iluminación.
 */
void vdfnCambiarIluminacion(S32 s32Cambio);

static U16 u16EstadoIluminacion;

#endif /* ACTUADORES_H_ */
