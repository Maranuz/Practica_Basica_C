#include <stdio.h>

int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variable
	char notaAlfabetica;
	//Solicitamos la Nota Alfabetica
	printf("Ingrese Nota Alfabetica entre A-E: ");
	//Se promueve a un valor int
	notaAlfabetica=getchar();
	//Mostrar la nota segun la nota alfabetica ingresada
	switch (notaAlfabetica)
	{
		case 'A':
		case 'a': printf("\n 5");
		break;
		
		case 'B':
		case 'b': printf("\n 4");
		break;
		
		case 'C':
		case 'c': printf("\n 3");
		break;
		
		case 'D':
		case 'd': printf("\n 2");
		break;
		
		case 'E': 
		case 'e': printf("\n 1");
		break;
		//Si se ingresa alguna nota alfabetica fuera del rango
		default: printf("Nota Fuera de Rango");
	}
	//Fin del Programa
	return 0;
}

