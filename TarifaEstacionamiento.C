#include <stdio.h>
#include <time.h> //Usamos libreria para el formato de 24h

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
		int tm_hour; 
		float tarifa, tarifaTotal;
	//Solicitamos La Cantidad 
	printf("Ingrese Cantidad De Horas: ");
	scanf("%d", &tm_hour);
	//Continua Si la Cantidad se Encuentra en el Formato de 24h
	while ((tm_hour < 0 ) || (tm_hour > 24)) {
		printf("Cantidad de Horas Ingresadas Erroneas: ");
		scanf("%d", &tm_hour);
	};
	//Segun la Cantidad de Horas Ingresadas se Calcula la tarifa
	if (tm_hour == 1) {
		tarifa = 0.5;
		printf("La Tarifa a pagar es de: %.2f $", tarifa);
	}
	else {
		tarifa = 1.2;
		tarifaTotal = tarifa * tm_hour;
		printf("La Tarifa a pagar es de: %.2f $", tarifaTotal);
	} 
	//Fin del Programa
	return 0;
}

