/*
 * autor: Luis Alfonso Chávez Abbadie
 * 30/10/2015
 * Proyecto ALUTECH
 * Código para la tarjeta FRDM KL25Z que servirá como controlador
 * para el proyecto ALUTECH.
 */

#include "derivative.h" 	/* include peripheral declarations */
#include "mytypes.h"		/* Notación Húngara */
#include "sensores.h"		/* API para solicitar información de los sensores */
#include "actuadores.h"		/* API para interactuar con los actuadores */

#define ILUM_DESEADA	(100)	/* Iluminación ambiental deseada por el usuario */

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
 * de iluminacion y el real, y se encarga de modificar la iluminacion según sea necesario.
 */
void vdfnControlIluminacion(U16 real, U16 deseada, U08 id_led){
	//TODO ALGORITMO DE CONTROL PROPORCIONAL PARA LA ILUMINACION
}
