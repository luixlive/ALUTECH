/*
 * autor: Luis Alfonso Ch�vez Abbadie
 * 30/10/2015
 * Proyecto ALUTECH
 * C�digo para la tarjeta FRDM KL25Z que servir� como controlador
 * para el proyecto ALUTECH.
 */

////////////////////////////////////////////
//				MAPA DE PINES KL25Z
//	Fotorresistencias		-		PTE20
//	LED's					-		PTB0
//	LM35 (Temperatura)		-		PTE22
//	Pantalla LCD:
//		RS					-		PTA13
//		E					-		PTD5
//		D0					-		PTA1
//		D1					-		PTA2
//		D2					-		PTD4
//		D3					-		PTA12
//		D4					-		PTA4
//		D5					-		PTA5
//		D6					-		PTC8
//		D7					-		PTC9
////////////////////////////////////////////

#include "derivative.h" 	/* include peripheral declarations */
#include "mytypes.h"		/* Notaci�n H�ngara */
#include "sensores.h"		/* API para solicitar informaci�n de los sensores */
#include "actuadores.h"		/* API para interactuar con los actuadores */
#include "pantallaLCD.h"	/* API para escribir en la pantalla LCD */

/**
 * @fn int main(void)
 * @brief Funci�n principal. Se encarga de mantener el ciclo infinito, y dentro de �l el alogoritmo de control
 * para la iluminaci�n.
 * @param No recibe nada.
 * @return Estado en el que termin� el programa.
 */
int main(void)
{
	int counter = 0;
	
	for(;;) {	 
		vdfnControlIluminacion(u16fnObtenerIluminacion());
		vdfnEscribirTempLCD(u16fnObtenerTemperatura());
		
		
	   	counter++;
	}
	
	return 0;
}
