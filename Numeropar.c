#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos las variables
	int numero;
	char opcion[3];
//Para dar opcion de ingresar otro numero
	do {
		//Solicitamos un numero
		printf("Ingrese un numero: ");
		//Almacenado en la variable numero
		scanf("%d", &numero);
		//Condicional If para indicar si es par o no
		if (numero % 2 == 0) {
			printf("El numero %d es par \n", numero);
		}
		else {
			printf("El numero %d no es par \n", numero);
		}	
		//Preguntamos si desea ingresar otro numero
		printf("Desea ingresar otro numero(si/no)? ");
		scanf("%s", opcion);
		
	} while (opcion[0] == 's' || opcion[0] == 'S');
	//fin del programa
	return 0;
}

