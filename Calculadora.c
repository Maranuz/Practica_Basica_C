#include <stdio.h>
#include <conio.h> // para utilizar la función getche
#include <stdlib.h> // para utilizar las funciones system ("cls") y system ("pause")
int main(int argc, char *argv[]) {
	//Definimos Variables
	char op;
	float n1, n2;
	//Menu
	do {
		
		system("cls"); // Limpia la pantalla
		
		printf("\n 1. Sumar");
		
		printf("\n 2. Restar");
		
		printf("\n 3. Multiplicar");
		
		printf("\n 4. Dividir");
		
		printf("\n 5. Salir");
		
		printf("\n Seleccione una Opcion: ");
		op=getche(); //Lee un caracter y lo muestra en pantalla
		switch(op)
		{
		//Suma
		case '1': printf("\n\n----Suma----\n\n");
		printf( "\n   Introduzca primer sumando: " );
		scanf( "%f", &n1);
		printf( "\n   Introduzca segundo sumando: " );
		scanf( "%f", &n2);
		printf( "\n   %.2f + %.2f = %.2f\n", n1, n2, n1 + n2 );
		break;
		//Resta
		case '2': printf("\n\n----Resta----\n\n");
		printf("Introduzca minuendo: " );
		scanf( "%f", &n1);
		printf( "\n   Introduzca sustraendo: " );
		scanf( "%f", &n2);
		printf( "\n   %.2f - %.2f = %.2f\n", n1, n2, n1 - n2 );
		break;
		//Multiplicacion
		case '3': printf("\n\n----Multiplica----\n\n");
		printf("Introduzca primer operando: " );
		scanf( "%f", &n1);
		printf( "\n   Introduzca segundo operando: " );
		scanf( "%f", &n2);
		printf( "\n   %.2f * %.2f = %.2f\n", n1, n2, n1 * n2 );
		break;
		//Division
		case '4': printf("\n\n-----Divide----\n\n");
		printf( "\n   Introduzca dividendo: " );
		scanf( "%f", &n1);
		printf( "\n   Introduzca divisor: " );
		scanf( "%f", &n2);
		if ( n2 != 0 )
			printf( "\n   %.2f div %.2f = %.2f \n", n1, n2, n1 / n2);
		else
			printf( "\n   ERROR: No se puede dividir entre cero.\n" );
		break;
		//Finaliza la Calculadora
		case '5': printf("\n\n****Adios****!\n\n ");
		break;
		default: printf("Opcion invalida \n");
		}
		system("pause"); //detiene el programa hasta que el usuario presione 
		//cualquier tecla
	} while(op!='5');
	//Fin del Programa
	return 0;
	
}
