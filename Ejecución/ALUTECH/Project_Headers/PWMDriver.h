/*
 * PWMDriver.h
 *
 *  Created on: Nov 5, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef PWMDRIVER_H_
#define PWMDRIVER_H_

#include "mytypes.h"

/*
 * PWM_vdfnDriverInit: configura el PWM de salida para la alimentación de los LED's.
 */
void PWM_vdfnDriverInit();

/*
 * PWM_vdfnModificarOffset: modifica el offset del PWM para modificar el ancho de pulso.
 * u16Nuevo_offset: nuevo valor deseado del offset.
 */
void PWM_vdfnModificarOffset(U16 u16Nuevo_offset);

#endif /* PWMDRIVER_H_ */
