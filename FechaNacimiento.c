#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos variables
	int fecha, edad;
//Solicitamos el Año de Nacimiento
	printf("Ingrese el Año de su Nacimiento: ");
//Se Almacena el dato ingresado en la Variable fecha
	scanf("%d", &fecha);
//Condicional if para que el Dato Ingresado no sea Mayor al Año Actual
	if (fecha < 2022) {
		//Operador para calcular la edad
		edad = 2022 - fecha;
		//Imprimimos el resultado
		printf("Naciste en %d y estamos en 2022, tienes %d años", fecha, edad);
	}
	//De lo contrario imprimimos el siguiente mensaje
	else { 
		printf("Fecha de nacimiento invalida");
	}
	//Fin del Programa
	return 0;
}

