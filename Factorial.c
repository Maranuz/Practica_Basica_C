#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	
	int numero, factorial, x;
	
	printf("Ingrese un Numero: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
		printf("El numero no se puede calcular");
	}
	else {
		x = 1;
		factorial = 1;
		while (x <= numero) {
			factorial = factorial * x;
				x = x + 1;
		}
		printf("El factorial del numero %d = %d ", numero, factorial);
	}
	
	
	return 0;
}

