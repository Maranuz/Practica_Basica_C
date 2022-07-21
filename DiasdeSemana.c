#include <stdio.h>

int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variable
	int dia;
//Solicitamos que introduzca un dia entre 1-7	
	printf( "\n   Introduzca dia de la semana entre 1-7: " );
//Se alamacena en la variable dia
	scanf( "%d", &dia );
//switch case para mostrar el dia segun el dato que se haya introducido
	switch ( dia )
	{
	case 1 : printf( "\n   Lunes" );
	break;
	
	case 2 : printf( "\n   Martes" );
	break;
	
	case 3 : printf( "\n   Miercoles" );
	break;
	
	case 4 : printf( "\n   Jueves" );
	break;
	
	case 5 : printf( "\n   Viernes" );
	break;
	
	case 6 : printf( "\n   Sabado" );
	break;
	
	case 7 : printf( "\n   Domingo" );
	break;
//Si se introduce un dato fuera de los casos, informar
	default : printf( "\n   ERROR: Dia incorrecto." );
	}
//Fin del Programa
	return 0;
}

