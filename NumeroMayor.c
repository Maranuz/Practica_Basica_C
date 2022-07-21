#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variables
	float a, b, c, mayor;
//Solicitamos los Valores
	printf("Ingrese 3 valores: ");
//Se almacenan en las variables
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
//Dependiendo de los valores ingresados se establecera cual es el mayor
	if ((a > b) && (a > c)){
		mayor = a;
	}
		else if (c > b) {
			mayor = c;
		}
	else {
			mayor = b;
	}
	
	if ((a == b) && (b == c)) {
		printf("Los Numeros Ingresados son Iguales");
	}
	else {
		printf("El Mayor es: %.1f ", mayor);
	}
	//Fin del Programa
	return 0;
}

