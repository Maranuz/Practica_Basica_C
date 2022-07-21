#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variable 
	float nota;
//Solicitamos la Nota
	printf("Ingrese la Nota: ");
//Se almacena en la variable nota
	scanf("%f", &nota);
//Condicional para aprobar o aplazar alumno
//Si el dato ingresado es mayor a 11 aprueba el almuno
	if (nota > 11) { 
		printf("Alumno Aprovado con: %.1f puntos", nota);
	}
//De lo contrario se aplaza al alumno
	else {
		printf("Alumno Aplazado con: %.1f puntos", nota);
	}
//Fin del Programa
	return 0;
}

