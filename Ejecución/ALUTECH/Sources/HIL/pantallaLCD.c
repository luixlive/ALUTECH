/*
 * pantallaLCD.c
 *
 *  Created on: Nov 23, 2015
 *      Author: LUIS ALFONSO
 */

#include "pantallaLCD.h"
#include "LCDDriver.h"
#include "mytypes.h"

#define ALUTECH_NAME		("ALUTECH")

static U08 u08DriverPinesIniciados = 0;

void vdfnEscribirTempLCD(U08 u08Temperatura){
	if (u08DriverPinesIniciados == 0)
		u08DriverPinesIniciados = LCD_u08fnDriverInit();
	LCD_u16fnWriteValue(ALUTECH_NAME, u08Temperatura);
}
