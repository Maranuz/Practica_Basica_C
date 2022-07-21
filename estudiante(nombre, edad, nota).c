#include <stdio.h>

int main(int argc, char *argv[]) {
//definimos las variables con array en la variable nombre
	int edad; float nota; char nombre[20];
//solicitamos al Usuario que ingrese un nombre	
	printf("Ingrese el Nombre: ");
//los datos ingresados se almacena en la variable nombre
	scanf("%s",nombre);
//solicitamos al Usuario que ingrese la edad 
	printf("Ingrese la Edad: ");
//los datos ingresados se almacena en la variable edad
	scanf("%d", &edad);
//solicitamos al Usuario que ingrese la nota
	printf("Ingrese la Nota: ");
//los datos ingresados se almacena en la variable nota
	scanf("%f", &nota);
//imprimimos un mensaje indicando los datos del usuario
	printf("%s tiene %d años y la nota es: %.2f", nombre,edad,nota);
//Fin del Programa
	return 0;
}
