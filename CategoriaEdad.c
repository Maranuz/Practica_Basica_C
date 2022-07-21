#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int edad;
	//Solicitamos la Edad 
	printf("Ingrese Edad: ");
	//Se Almacena en la Variable "edad"
	scanf("%d", &edad);
	//Rangos de Edades para Indicar Su Categoria
	if ((edad >= 0) && (edad < 2)){
		printf("Es bebé");
	}
		else if ((edad >= 2) && (edad < 11)){
			printf("Es un Niño");
		}
		else if ((edad >= 11) && (edad < 18)){
			printf("Es un Adolescente");
		}
		else if ((edad >= 18) && (edad < 30)){
			printf("Es un Adulto Joven");
		}
		else if ((edad >= 30) && (edad < 60)){
			printf("Es un Adulto");
		}
		else if (edad >= 60) {
			printf("Es un Adulto Mayor");
		}
	//Si la Edad Ingresada no se Encuentra en los Intervalos de Edades
	//Se indica que la Edad Introducidad es Invalida
	else {
			printf("Edad Introducida Invalida");
	}
	return 0;
}
