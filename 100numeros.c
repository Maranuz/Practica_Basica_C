#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int acum = 0, cont = 0, n, i;
	//Se Ingresan los Numeros, se Cuentan y se Acumulan
	for (i=1;i<=100;i++) {
		scanf("%d", &n);
		if (n > 0){
			cont = cont + 1;
			acum = acum + n;
		}
	}
	//Se Imprimen la Cantidad de los Numeros Positivos y la Sumatoria
	printf("\n Leídos %d números positivos \n\n", cont);
	printf("Sumatoria de: %d ", acum);
	//Fin del Programa
	return 0;
}

