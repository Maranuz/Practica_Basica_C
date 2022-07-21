#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float salario, s, impuestos, salarioNeto;
	//Solicitamos el Salario del Empleado
	printf("Ingrese El Salario del Empleado: ");
	//Lo Almacenamos en la Variable "salario"
	scanf("%f", &salario);
	//Continua Mientras Salario sea Positivo
	while(salario <  0) {
		printf("El Salario no Puede ser Negativo: ");
		scanf("%f", &salario);
	}
	//Para Mostrar El Salario Ingresado Intacto
	s = salario;
	//Aplicamos los Impuestos Segun el Salario Ingresado
	if (salario < 100) {
		impuestos = s * 0.08;
	}
		else if ((salario = 100) && (salario < 350)) {
			impuestos = s * 0.12;
		}
	else {
		impuestos = s * 0.20;
	}
	//Se Calcula el Salario Neto
	salarioNeto = s - impuestos;
	//Se Imprime los Resultados
	printf("El Salario del Empleado es de : %.2f $ \n" 
		   "Los impuestos a pagar son de : %.2f $ \n"
		   "El Salario Neto es de: %.2f $ \n", s, impuestos, salarioNeto);
	//Fin del Programa
	return 0;
}
