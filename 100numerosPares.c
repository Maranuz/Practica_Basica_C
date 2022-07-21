#include <stdio.h>

int main(void) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Inicia el Conteo en 2 y Limita el Conteo Hasta 100
	for (int x = 2; x <= 100; x++) {
		//Verifica si es Par
		if (x % 2 == 0) {
			printf("%d,", x);
		}
	}
	//Fin del Programa
	return 0;
}
