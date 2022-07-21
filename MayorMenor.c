#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float a, b, c, mayor, menor;
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
	//Dependiendo de los valores ingresados se establecera cual es el menor
	if ((a < b) && (a < c)){
		menor = a;
	}
	else if (c < b) {
		menor = c;
	}
	else {
		menor = b;
	}
	//Si los datos son iguales se indican que lo son 
	if ((a == b) && (b == c)) {
		printf("Los Numeros Ingresados son Iguales");
	}
	//Se muestra el resultado
	else {
	printf("El Mayor es: %.1f \n" "El Menor es: %.1f", mayor, menor);
	}
	//Fin del Programa
	return 0;
}

