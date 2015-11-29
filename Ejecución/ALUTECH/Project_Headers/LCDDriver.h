/*
 * LCDDriver.h
 *
 *  Created on: Nov 23, 2015
 *      Author: LUIS ALFONSO
 */

#ifndef LCDDRIVER_H_
#define LCDDRIVER_H_

#include "mytypes.h"
#include "derivative.h"

/*
 * Declaración de macros para los puertos que se usarán en cada pin de la LCD.
 */
#define PORT_LCD_RS					(PORTA_BASE_PTR)
#define PORT_LCD_D0					(PORTA_BASE_PTR)
#define PORT_LCD_D1					(PORTA_BASE_PTR)
#define PORT_LCD_D2					(PORTD_BASE_PTR)
#define PORT_LCD_D3					(PORTA_BASE_PTR)
#define PORT_LCD_D4					(PORTA_BASE_PTR)
#define PORT_LCD_D5					(PORTA_BASE_PTR)
#define PORT_LCD_D6					(PORTC_BASE_PTR)
#define PORT_LCD_D7					(PORTC_BASE_PTR)
#define PORT_LCD_E					(PORTD_BASE_PTR)

#define PORT_GPIO_LCD_RS			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D0			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D1			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D2			(PTD_BASE_PTR)
#define PORT_GPIO_LCD_D3			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D4			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D5			(PTA_BASE_PTR)
#define PORT_GPIO_LCD_D6			(PTC_BASE_PTR)
#define PORT_GPIO_LCD_D7			(PTC_BASE_PTR)
#define PORT_GPIO_LCD_E				(PTD_BASE_PTR)

#define PORT_NUMBER_LCD_RS			(13)
#define PORT_NUMBER_LCD_D0			(1)
#define PORT_NUMBER_LCD_D1			(2)
#define PORT_NUMBER_LCD_D2			(4)
#define PORT_NUMBER_LCD_D3			(12)
#define PORT_NUMBER_LCD_D4			(4)
#define PORT_NUMBER_LCD_D5			(5)
#define PORT_NUMBER_LCD_D6			(8)
#define PORT_NUMBER_LCD_D7			(9)
#define PORT_NUMBER_LCD_E			(5)

/**
 * @fn U08 LCD_u08fnDriverInit(void)
 * @brief Configura la pantalla LCD.
 * @param No recibe nada.
 * @return 1 si se configuró correctamente, 0 de otro modo.
 */
U08 LCD_u08fnDriverInit(void);

/**
 * @fn void LCD_u16fnWriteValue(	TODO	)
 * @brief Imprime el valor que recibe en la pantalla LCD.
 * @param TODO
 * @return No retorna nada.
 */
void LCD_u16fnWriteValue(char *linea1[], char *linea2[]);

#endif /* LCDDRIVER_H_ */
