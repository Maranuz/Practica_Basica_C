#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int num=0; 
	int length;
	//Solicitamos un Numero
	printf("Ingrese un Numero Entero: ");
	//Lo Almacenamos en la Variables "num"
	scanf("%d", &num); 
	//Continua si el Numero Ingresado es Positivo
	while(num < 0){
		printf("%s","error \n Debe ingresar numero/s positivos: ");
		num=0;
		scanf("%d", &num); 
	}
	//Si el Numero Ingresado es Igual a 0 se Cuenta como un Digito
	if (num == 0) { 
		length = 1; 
		printf("Su Numero Tiene %d Digitos", length);
	} 
	//De lo contrario, Usamos Operador para Contar los Digitos del Numero Entero
	else { 
		length = log10(fabs(num)) + 1; if (num < 0) length++; 
		printf("Su Numero Tiene %d Digitos", length);
	}
	return 0;
}

