#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int exponente;
	float base, potencia, i;
	//Solicitamos la Base
	printf("Ingresa la Base: ");
	scanf("%f", &base);
	//Solicitamos el exponente
	printf("Ingresa el Exponente: ");
	scanf("%d", &exponente);
	//Calculo de la potencia
	potencia=pow(base,exponente);
	//Mostrar Multiplicaciones sucesivas
	for ((i = 1); (i <= exponente); i++) {
		printf("%.0f", base);
		if (i <= (exponente - 1)){
			printf("%s","x");
		}
	}
	//Mostrar Resultado
	printf("\n Valor de potencia: %.2f \n", potencia);

	
	
	return 0;
}
	

