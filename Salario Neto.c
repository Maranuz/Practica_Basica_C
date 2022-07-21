#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos las variables en float
	float salario, salarioNeto, impuestos, horas, preciohora;
//Solicitamos las Horas trabajadas
	printf("Ingrese las Horas Trabajadas: ");
//Se almacena en la variable horas
	scanf("%f", &horas);
//Solicitamos el precio de las horas
	printf("Ingrese el Precio de las Horas: ");
//Se almacena en la variable preciohora
	scanf("%f", &preciohora);
//Operadores para calcular el Salario, Impuesto y Salario Neto
	salario = horas * preciohora;
//El impuesto es calculado por el salario y descuento de un 12%
	impuestos = salario * 0.12; 
	salarioNeto = salario - impuestos;
//Imprimimos el Salario, los impuestos y Salario Neto del trabajado
	printf("Su Salario es de %.2f con impuestos de %.2f. Su Salario Neto es de %.2f", salario, impuestos, salarioNeto);
	return 0;
}

