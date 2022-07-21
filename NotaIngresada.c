#include <stdio.h>
#include <stdlib.h> // para utilizar la función system ("cls");
int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float nota;
	//Para admitir solo numeros entre 0 y 20
	do {
		system("cls"); // Limpia la pantalla
		printf("\n\nIngrese la nota: ");
		scanf("%f", &nota);
		
	} while(nota<0 || nota>20);
	//Mostramos La Nota Ingresada
	printf("\n\nNota Ingresada por el Usuario: %.2f",nota);
	//Fin del Programa
	return 0;
}

