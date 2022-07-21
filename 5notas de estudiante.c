#include <stdio.h>
#include <string.h>
int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	
	char nombre[20];
	float notas1, notas2, notas3, notas4, notas5, suma, promedio;
//Solicitamos el Nombre del Estduiante	
	printf("Ingrese Nombre del Estudiante: ");
//Almacenamos en la variable nombre 
	fgets(nombre, 20, stdin);
// Remover salto de línea
	if ((strlen(nombre) > 0) && (nombre[strlen(nombre) - 1] == '\n'))
	{
		nombre[strlen(nombre) - 1] = '\0';
	}
//Solicitamos el valor de las notas y se almacenan en sus respectivas variables
	printf("Ingrese El valor de la nota 1: ");
	scanf("%f", &notas1);
	
	printf("Ingrese El valor de la nota 2: ");
	scanf("%f", &notas2);
	
	printf("Ingrese El valor de la nota 3: ");
	scanf("%f", &notas3);
	
	printf("Ingrese El valor de la nota 4: ");
	scanf("%f", &notas4);
	
	printf("Ingrese El valor de la nota 5: ");
	scanf("%f", &notas5);
//Operadores para el promedio del Estudiante
	suma = notas1 + notas2 + notas3 + notas4 + notas5 ; 
	promedio = suma / 5;
//Imprimimos El promedio
	printf("%s tiene un promedio de %.2f", nombre, promedio);
//Fin del programa
	return 0;
}

