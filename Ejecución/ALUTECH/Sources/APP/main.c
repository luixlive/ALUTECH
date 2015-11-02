/*
 * autor: Luis Alfonso Ch�vez Abbadie
 * 30/10/2015
 * Proyecto ALUTECH
 * C�digo para la tarjeta FRDM KL25Z que servir� como controlador
 * para el proyecto ALUTECH.
 */

#include "derivative.h" 	/* include peripheral declarations */
#include "mytypes.h"		/* Notaci�n H�ngara */
#include "sensores.h"		/* API para solicitar informaci�n de los sensores */
#include "actuadores.h"		/* API para interactuar con los actuadores */

#define ILUM_DESEADA	(100)	/* Iluminaci�n ambiental deseada por el usuario */

void vdfnControlIluminacion(U16 real, U16 deseada, U08 id_led);

int main(void)
{
	int counter = 0;
	
	U08 u08Led = 0;
	
	for(;;) {	 
		U16 u08Ilum_real = u16fnObtenerIluminacion();
		
		while (u08Led < 4){
			vdfnControlIluminacion(u08Ilum_real, ILUM_DESEADA, u08Led++);
		}
		u08Led = 0;
		
	   	counter++;
	}
	
	return 0;
}

/*
 * vdfnControlIluminacion: algoritmo de control proporcional que recibe el valor deseado
 * de iluminacion y el real, y se encarga de modificar la iluminacion seg�n sea necesario.
 */
void vdfnControlIluminacion(U16 real, U16 deseada, U08 id_led){
	//TODO ALGORITMO DE CONTROL PROPORCIONAL PARA LA ILUMINACION
}
