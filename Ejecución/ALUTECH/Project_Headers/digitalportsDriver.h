/*
 * digitalportsDriver.h
 *
 *  Created on: Nov 26, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef DIGITALPORTSDRIVER_H_
#define DIGITALPORTSDRIVER_H_

#include "mytypes.h"
#include "derivative.h"

/**
 * @fn U08 digitalPorts_vdfnSetPortOutput(PORT_MemMapPtr port, U08 num)
 * @brief Define como puerto digital de salida al puerto que se le indique.
 * @param port Base del puerto (A, B, C, D o E).
 * @param num Número del pin de ese puerto.
 * @return Retorna 1 si se configura correctamente, 0 de otro modo.
 */
U08 digitalPorts_vdfnSetPortOutput(PORT_MemMapPtr port, U08 num);

/**
 * @fn digitalPorts_vdfnSetOne(GPIO_MemMapPtr port, U08 num)
 * @brief Pone la salida digital del puerto indicado como 1.
 * @param port Base del puerto (A, B, C, D o E).
 * @param num Número del pin de ese puerto.
 * @return No retorna nada.
 */
void digitalPorts_vdfnSetOne(GPIO_MemMapPtr port, U08 num);

/**
 * @fn digitalPorts_vdfnSetOne(GPIO_MemMapPtr port, U08 num)
 * @brief Pone la salida digital del puerto indicado como 0.
 * @param port Base del puerto (A, B, C, D o E).
 * @param num Número del pin de ese puerto.
 * @return No retorna nada.
 */
void digitalPorts_vdfnSetZero(GPIO_MemMapPtr port, U08 num);

#endif /* DIGITALPORTSDRIVER_H_ */
