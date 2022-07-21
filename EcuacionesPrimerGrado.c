#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float a, b, x;
	//Solicitamos los Valores de "a" y "b"
	printf("Ingrese el Valor de a: ");
	scanf("%f", &a);
	
	printf("Ingrese el Valor de b: ");
	scanf("%f", &b);
	//Si Se Ingresa un 0 Como Valor en a, Mostrar Solucion Imposible 
	if (a == 0) {
		printf("Solucion Imposible");
	}
	//De lo Contrario, Dar Solucion de la Ecuacion
	else {
		x = (-b)/a;
		printf("Solucion de la Ecuacion: %.2f", x);
	}
	//Fin del Programa
	return 0;
}
