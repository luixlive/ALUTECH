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

#define ILUM_DESEADA	(65535/2)	/* Iluminación ambiental deseada por el usuario */

void vdfnControlIluminacion(U16 real, U16 deseada);

int main(void)
{
	int counter = 0;
	
	U16 u16Ilum_real;
	
	for(;;) {	 
		u16Ilum_real = u16fnObtenerIluminacion();
		vdfnControlIluminacion(u16Ilum_real, ILUM_DESEADA);
		
	   	counter++;
	}
	
	return 0;
}

/*
 * vdfnControlIluminacion: algoritmo de control proporcional que recibe el valor deseado
 * de iluminacion y el real, y se encarga de modificar la iluminacion según sea necesario.
 */
void vdfnControlIluminacion(U16 u16Real, U16 u16Deseada){
	U16 u16Error = u16Deseada - u16Real;
	vdfnCambiarIluminacion(u16Error);
}
