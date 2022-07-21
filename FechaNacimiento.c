#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos variables
	int fecha, edad;
//Solicitamos el A�o de Nacimiento
	printf("Ingrese el A�o de su Nacimiento: ");
//Se Almacena el dato ingresado en la Variable fecha
	scanf("%d", &fecha);
//Condicional if para que el Dato Ingresado no sea Mayor al A�o Actual
	if (fecha < 2022) {
		//Operador para calcular la edad
		edad = 2022 - fecha;
		//Imprimimos el resultado
		printf("Naciste en %d y estamos en 2022, tienes %d a�os", fecha, edad);
	}
	//De lo contrario imprimimos el siguiente mensaje
	else { 
		printf("Fecha de nacimiento invalida");
	}
	//Fin del Programa
	return 0;
}

