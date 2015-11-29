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
 * @brief Entrega el valor actual de la iluminación ambiental actual con valores entre 0 y 50000.
 * @param No recibe nada.
 * @return Valor de iluminación ambiental en tiempo real.
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
