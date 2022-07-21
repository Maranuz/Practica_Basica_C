#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variables
	int a, b;
//Solicitamos el primer numero
	printf("Ingrese un numero: ");
//Almacenada en la variable a
	scanf("%d", &a);
//Solicitamos el segundo numero	
	printf("Ingrese otro numero: ");
//Almacenada en la variable b
	scanf("%d", &b);
//Condicional else if para indicar si "a" es mayor a "b"
	if (a > b){
		printf("%d es mayor que %d", a, b);
	}
//Condicional else if para indicar si "a" es menor a "b"
	else if(a < b) {
		printf("%d es mayor que %d", b, a);
	}
//De lo contrario
	else {
		printf("Los numeros ingresados son iguales");
	}
//Fin del Programa
	return 0;
}

