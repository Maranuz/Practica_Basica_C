#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int n, total;
	float numero, suma;
	//Solicitamos la Cantidad de Numeros
	printf("Ingrese la cantidad de números a leer: ");
	//Se Almacena en la variable "n"
	scanf("%d", &n);
	//Se inicializa la variable total en "n" y suma en 0
	total = n;
	suma = 0;
	//Ciclo de la Suma
	while (total > 0) {
		printf("Ingrese un número: ");
		scanf("%f", &numero);
		suma = suma + numero;
		total = total - 1;
	}
	//Resultados de la Suma
	printf("La Suma de los %d  Números es: %.2f ", n, suma);
	//Fin del Programa
	return 0;
}

