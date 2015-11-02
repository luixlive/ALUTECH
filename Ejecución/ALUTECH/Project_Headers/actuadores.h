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
 * u08fnIluminacionEncendida: informa al usuario si el LED indicado está encendido.
 * param id_led: id del LED del que se desea obtener la información.
 * return: 1 si está encendido, 0 de otro modo.
 */
U08 u08fnIluminacionEncendida(U08 u08Id_led);

/*
 * vdfnEncenderIluminacion: enciende el LED indicado por el usuario.
 * id_led: id del LED que se desea encender.
 */
void vdfnEncenderIluminacion(U08 u08Id_led);

/*
 * vdfnApagarIluminacion: apaga el LED indicado por el usuario.
 * id_led: id del LED que se desea apagar.
 */
void vdfnApagarIluminacion(U08 u08Id_led);

/*
 * vdfnCambiarIluminacion: modifica la intensidad de brillo del LED indicado.
 * u08Cambio: valor del cambio a realizar en la iluminación.
 * id_led: id del LED que se desea modificar.
 */
void vdfnCambiarIluminacion(S16 u08Cambio, U08 u08Id_led);

static U08 u08aEstadoIluminacion[];

#endif /* ACTUADORES_H_ */
