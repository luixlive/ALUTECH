/*
 * pantallaLCD.h
 *
 *  Created on: Nov 23, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef PANTALLALCD_H_
#define PANTALLALCD_H_

#include "mytypes.h"

/**
 * @fn void vdfnEscribirTempLCD(U16 u16Temperatura)
 * @brief Imrprime en la pantalla LCD el valor que reciba como parámetro.
 * @param u08Temperatura valor de temperatura que se imprimirá.
 * @return No retorna nada.
 */
void vdfnEscribirTempLCD(U08 u08Temperatura);

#endif /* PANTALLALCD_H_ */
