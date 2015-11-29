/*
 * PWMDriver.h
 *
 *  Created on: Nov 5, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef PWMDRIVER_H_
#define PWMDRIVER_H_

#include "mytypes.h"

/**
 * @fn void PWM_vdfnDriverInit()
 * @brief configura el PWM de salida para la alimentación de los LED's.
 * @param No recibe nada.
 * @return No retorna nada.
 */
void PWM_vdfnDriverInit();

/**
 * @fn void PWM_vdfnModificarOffset(U16 u16Nuevo_offset)
 * @brief Modifica el offset del PWM para aumentar o disminuir la luminosidad de los LED's.
 * @param u16Nuevo_offset El nuevo offset del PWM.
 * @return No retorna nada.
 */
void PWM_vdfnModificarOffset(U16 u16Nuevo_offset);

#endif /* PWMDRIVER_H_ */
