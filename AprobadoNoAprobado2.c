#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variable 
	//Hacemos un array en la variable nombre
	char nombre[20];
	float nota;
	//Solicitamos el Nombre del Alumno
	printf("Ingrese nombre del alumno: ");
	//Usamos la funcion fgets donde se almacenara los datos en la variable 
	//nombre, con una longitud de 20 caracteres y con un stream stdin
	fgets(nombre, 20, stdin);
	//Remover salto de linea 
	if ((strlen(nombre) > 0) && (nombre[strlen(nombre) - 1] == '\n'))
	{
		nombre[strlen(nombre) - 1] = '\0';
	}
	//Solicitamos la Nota
	printf("Ingrese la Nota del Alumno %s : ", nombre);
	//Se almacena en la variable nota
	scanf("%f", &nota);
	//Se continua mientras nota este en un rango de 0-20
	while ((nota < 0) || (nota > 20)) {
		printf("La Nota Debe Estar Entre 0 - 20, Ingresar Nuevamente: ");
		scanf("%f", &nota);
	}
	//Condicional para aprobar o aplazar alumno
	//Si el dato ingresado es mayor a 11 aprueba el almuno
	if (nota > 11) { 
		printf("El Alumno %s Esta Aprovado con: %.1f puntos", nombre, nota);
	}
	//De lo contrario se aplaza al alumno
	else {
		printf("El Alumno %s Esta Aplazado con: %.1f puntos", nombre, nota );
	}
	//Fin del Programa
	return 0;
}
