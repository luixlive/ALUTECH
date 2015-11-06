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
 * param id_led: id del LED del que se desea obtener la información.
 * return: valor en el que se encuentra el LED.
 */
U16 u16fnValorIluminacion();

/*
 * vdfnCambiarIluminacion: modifica la intensidad de brillo del LED indicado.
 * u08Cambio: valor del cambio a realizar en la iluminación.
 * id_led: id del LED que se desea modificar.
 */
void vdfnCambiarIluminacion(S16 u16Cambio);

static U16 u16EstadoIluminacion;

#endif /* ACTUADORES_H_ */
