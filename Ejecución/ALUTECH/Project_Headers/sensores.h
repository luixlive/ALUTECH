/*
 * sensores.h
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef SENSORES_H_
#define SENSORES_H_

#include "mytypes.h"

/**
 * @fn U16 u16fnObtenerIluminacion(void)
 * @brief Entrega el valor actual de la iluminaci�n ambiental actual con valores entre 0 y 50000.
 * @param No recibe nada.
 * @return Valor de iluminaci�n ambiental en tiempo real.
 */
U16 u16fnObtenerIluminacion(void);

/**
 * @fn U16 u16fnObtenerTemperatura(void)
 * @brief Entrega el valor actual de la temperatura con valores entre 0 y 50000.
 * @param No recibe nada.
 * @return Valor de temperatura ambiental en tiempo real.
 */
U16 u16fnObtenerTemperatura(void);

#endif /* SENSORES_H_ */
