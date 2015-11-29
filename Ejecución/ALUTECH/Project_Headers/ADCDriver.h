/*
 * ADCDriver.h
 *
 *  Created on: Oct 31, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef ADCDRIVER_H_
#define ADCDRIVER_H_

#include "mytypes.h"

/**
 * @fn U08 ADC_u08fnDriverInit(void)
 * @brief Configura e inicia el ADC del pin E20 de la KL25Z.
 * @param No recibe nada.
 * @return 1 si se configuró correctamente, 0 de otro modo.
 */
U08 ADC_u08fnDriverInit(void);

/**
 * @fn U16 ADC_u16fnReadValueIlum(void)
 * @brief Lee el voltaje de las fotorresistencias conectadas a la tarjeta.
 * @param No recibe nada.
 * @return Valor del voltaje en un rango de 0 a 65535.
 */
U16 ADC_u16fnReadValueIlum(void);

/**
 * @fn U16 ADC_u16fnReadValueTemp(void)
 * @brief Lee el voltaje de las que entrega el sensor de temperatura.
 * @param No recibe nada.
 * @return Valor del voltaje en un rango de 0 a 65535.
 */
U16 ADC_u16fnReadValueTemp(void);

#endif /* ADCDRIVER_H_ */
