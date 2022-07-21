#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	
	int i, n, resultado;
	
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	
	if (n > 0) {
		for (i = 1 ; i <= 10; i++) {
			resultado = n * i;
			printf("%d x %d = %d \n", n, i, resultado);
		}
	}
	else {
		printf("Los Datos Ingresados Deben ser Mayor a 0");
	}
	
	return 0;
}

