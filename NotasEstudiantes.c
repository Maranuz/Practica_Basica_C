#include <stdio.h>
//Definimos las Variables
float promedio(int valores[], int cantidad) {
	int i;
	float suma = 0.0;
	//Hacemos el contador para el numero de materias materias
	for (i = 0; i < cantidad; ++i)
		suma += valores[i];
	//retorna el Resultado
	return suma / (float) cantidad;
}


int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int materias[20];
	char nombre[20];
	char opcion[3];
	int n, i;
	//Para Calcular mas Promedios
	do {
		//Solicitamos el Nombre del Alumno
		printf("Ingrese Nombre del Alumno: ");
		scanf("%s",nombre);
		//Solicitamos el Numero de Materias
		printf("Cuantas Materias Tiene el Alumno %s? ", nombre);
		scanf("%d", &n);
		//Hacemos Funcionar el Contador
		for (i = 0; i < n; ++i) {
			printf("Materia %d: ", i + 1);
			scanf("%d", &materias[i]);
			//Limitamos rango entre 0 y 20
			while ((materias[i] > 20) | (materias[i] < 0)) {
				printf("Valor de la nota invalida, debe ser entre 1-20: ");
				scanf("%d", &materias[i]);
			}
		}
		//Mostramos el promedio
		printf("El promedio de %s es %.1f\n", nombre, promedio(materias, n));
		//Mostramos si el Alumno Tiene Derecho a Beca o no
		if (promedio(materias, n) >= 18) {
			printf("Tiene Derecho a Beca. \n");
		}
		else {
			printf("No Tiene Derecho a Beca. \n");
		}
		//Preguntamos si Desea Calcular Otros Promedios
		printf("Desea calcular mas promedios (si/no)? ");
		scanf("%s", opcion);
		
	} while (opcion[0] == 's' || opcion[0] == 'S'); //Dependiendo de la eleccion
	//Se continua Calculando o se Detiene El Programa
	//Fin del Programa
	return 0;
}
