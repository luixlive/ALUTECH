/*
 * LCDDriver.c
 *
 *  Created on: Nov 23, 2015
 *      Author: LUIS ALFONSO
 */

#include "derivative.h"
#include "LCDDriver.h"
#include "mytypes.h"

U08 LCD_u08fnDriverInit(void){
	U08 u08Return = 1;
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_RS, PORT_NUMBER_LCD_RS);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D0, PORT_NUMBER_LCD_D0);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D1, PORT_NUMBER_LCD_D1);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D2, PORT_NUMBER_LCD_D2);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D3, PORT_NUMBER_LCD_D3);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D4, PORT_NUMBER_LCD_D4);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D5, PORT_NUMBER_LCD_D5);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D6, PORT_NUMBER_LCD_D6);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_D7, PORT_NUMBER_LCD_D7);
	u08Return &= digitalPorts_vdfnSetPortOutput(PORT_LCD_E, PORT_NUMBER_LCD_E);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
	return u08Return;
}

void LCD_u16fnWriteValue(char *linea1[], char *linea2[]){
	LCD_vdfnClearDisplay();
	LCD_vdfnReturnHome();
	//TODO ESCRIBIR EN LA LCD LAS DOS LINEAS
}

void LCD_vdfnClearDisplay(){
	digitalPorts_vdfnSetOne(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_RS, PORT_NUMBER_LCD_RS);
	digitalPorts_vdfnSetOne(PORT_GPIO_LCD_D0, PORT_NUMBER_LCD_D0);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D1, PORT_NUMBER_LCD_D1);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D2, PORT_NUMBER_LCD_D2);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D3, PORT_NUMBER_LCD_D3);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D4, PORT_NUMBER_LCD_D4);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D5, PORT_NUMBER_LCD_D5);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D6, PORT_NUMBER_LCD_D6);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D7, PORT_NUMBER_LCD_D7);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
}

void LCD_vdfnReturnHome(){
	digitalPorts_vdfnSetOne(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_RS, PORT_NUMBER_LCD_RS);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D0, PORT_NUMBER_LCD_D0);
	digitalPorts_vdfnSetOne(PORT_GPIO_LCD_D1, PORT_NUMBER_LCD_D1);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D2, PORT_NUMBER_LCD_D2);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D3, PORT_NUMBER_LCD_D3);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D4, PORT_NUMBER_LCD_D4);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D5, PORT_NUMBER_LCD_D5);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D6, PORT_NUMBER_LCD_D6);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_D7, PORT_NUMBER_LCD_D7);
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
}

void LCD_vdfnWriteData(U08 u08Data){
	GPIO_MemMapPtr gpio_ports[] = {PORT_GPIO_LCD_RS, PORT_GPIO_LCD_D0, PORT_GPIO_LCD_D1, PORT_GPIO_LCD_D2, PORT_GPIO_LCD_D3, PORT_GPIO_LCD_D4, PORT_GPIO_LCD_D5, PORT_GPIO_LCD_D6, PORT_GPIO_LCD_D7};
	U08 ports_numbers[] = {PORT_NUMBER_LCD_RS, PORT_NUMBER_LCD_D0, PORT_NUMBER_LCD_D1, PORT_NUMBER_LCD_D2, PORT_NUMBER_LCD_D3, PORT_NUMBER_LCD_D4, PORT_NUMBER_LCD_D5, PORT_NUMBER_LCD_D6, PORT_NUMBER_LCD_D7};
	U08 setValues[8] = {1, 2, 4, 8, 16, 32, 64, 128};
	digitalPorts_vdfnSetOne(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
	
	char iteration = 0;
	for (; iteration < 9; iteration++){
		char enable = u08Data & setValues[iteration-1];
		if (iteration == 0)
			digitalPorts_vdfnSetOne(PORT_GPIO_LCD_RS, PORT_NUMBER_LCD_RS);
		else if (enable)
			digitalPorts_vdfnSetOne(gpio_ports[iteration], ports_numbers[iteration]);
		else
			digitalPorts_vdfnSetZero(gpio_ports[iteration], ports_numbers[iteration]);
	}
	digitalPorts_vdfnSetZero(PORT_GPIO_LCD_E, PORT_NUMBER_LCD_E);
}
