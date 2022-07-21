#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variables	
	float mp, tiempo, ta;
//Solicitamos la Duracion de la Llamada
	printf("Ingrese el tiempo de la llamada: ");
//Se almacena en la variable tiempo
	scanf("%f", &tiempo);
//Si la duracion de la llamada es 0 se indica que no hubo consumo
	if (tiempo == 0) {
		printf("No Hubo Consumo \n");
	}
//De lo contrario si la duracion es menor o igual a 3 no habra algun costo
		else if (tiempo <= 3){
			mp=0;
		}
//Si la duracion de la llamada es mas de 3 se calculan los costos
		else if(tiempo > 3) {
			ta=tiempo-5;
			mp=1000+ta*500;
		}
//Si no se cumplen ninguna de las condiciones, se imprime el mensaje
	else {
		printf("Tiempo inválido");
	}
//Se imprimen la duracion y los costos de la llamada
	printf("Tiempo consumido: %.2f min \n" "Costo de la Llamada: Bs. %.2f ", tiempo, mp);
//Fin del Programa
	return 0;
}

