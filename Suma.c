#include <stdio.h>

int main(int argc, char *argv[]) {
//definimos las variables a y b como enteros
	int a,b;
//Le solicitamos al usuario ingrese un numero
	printf("Ingrese un numero: ");
//El dato ingresado se almacena en la variable a
	scanf("%d",&a);
//Le solicitamos que ingrese otro numero
	printf("Ingrese un numero: ");
//El dato ingresado se almacena en la variable b
	scanf("%d",&b);
//Imprimimos el resultado de los dos numeros utilizando un operador al momento de imprimir
	printf("El resultado es: %d", a+b);
//Fin del Programa
	return 0;
}
