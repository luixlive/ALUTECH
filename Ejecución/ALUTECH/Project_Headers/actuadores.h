/*
 * actuadores.h
 *
 *  Created on: Oct 30, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef ACTUADORES_H_
#define ACTUADORES_H_

#include "mytypes.h"

/**
 * @fn void vdfnCambiarIluminacion(S32 s32Cambio)
 * @brief Modifica la intensidad de brillo de los LED's.
 * @param s32Cambio Nuevo voltaje que se aplicará a loo LED's.
 * @return No retorna nada.
 */
void vdfnCambiarIluminacion(S32 s32Cambio);

/**
 * @fn void vdfnControlIluminacion(U16 real)
 * @brief Algoritmo de control proporcional que recibe el valor deseado de iluminación y el real, y 
 * se encarga de modificar la iluminación según sea necesario.
 * @param u16Real Valor real de la iluminación ambiental.
 * @param u16Deseada Valor deseado que se quisiera obtener en la iluminación ambiental.
 * @return No retorna nada.
 */
void vdfnControlIluminacion(U16 u16Real);

/**
 * @var static U08 u08Driver_PWM_iniciado
 * @brief Indica si el PWM ya se configuró e inició o aún sigue inactivo.
 */
static U08 u08Driver_PWM_iniciado;

/**
 * @var static U16 u16EstadoIluminacion
 * @brief Estado actual del voltaje que se está entregando a los LED's.
 */
static U16 u16EstadoIluminacion;

#endif /* ACTUADORES_H_ */
