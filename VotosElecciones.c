#include <stdio.h>
#include <conio.h>// para utilizar la función getche
#include <stdlib.h>// para utilizar las funciones system ("cls") y system ("pause")
int main(int argc, char *argv[]) {
	//Definimos Variables Inicializadas en 0
	char op;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, votosT= 0;
	float pc1 = 0, pc2 = 0, pc3 = 0, pc4 = 0;
	//Ciclo de las Votaciones
	do {
		
		system("cls"); // Limpia la pantalla
		printf("************************** \n"
			   "Author: Martin Uzcategui \n"
			   "************************** \n");
		//Seleccion de Candidatos
		printf("\n 1. Primer Candidato");
		
		printf("\n 2. Segundo Candidato");
		
		printf("\n 3. Tercer Candidato");
		
		printf("\n 4. Cuarto Candidato");
		//Se Finaliza las Votaciones
		printf("\n 0. Finalizar Votos");
		//Solicitamos que Elija una de las Opciones
		printf("\n Seleccione una Opcion:  \n");
		op=getche();//Lee un caracter y lo muestra en pantalla
		switch(op) {
			//A cada Candidato se le Sumara 1 Voto segun las Opciones Ingresadas
		case '1': c1 = c1 + 1;
		break;
		case '2': c2 = c2 + 1;
		break;
		case '3': c3 = c3 + 1;
		break;
		case '4': c4 = c4 + 1;
		break;
		//Finaliza los Votos
		case '0': printf("\n\n****Votos Finalizados****!\n\n ");
		
		//Operadores de los Votos
		votosT = c1 + c2 + c3 + c4;
		pc1 = (c1*100) / votosT;
		pc2 = (c2*100) / votosT;
		pc3 = (c3*100) / votosT;
		pc4 = (c4*100) / votosT;
		
		//Mostramos la Cantidad de Votos y el Porcentaje de Votos de cada 
		//Candidato
		printf("\n Primer Candidato: %d votos con un %.2f %% ", c1, pc1);
		
		printf("\n Segundo Candidato: %d votos con un %.2f %%", c2, pc2);
		
		printf("\n Tercer Candidato: %d votos con un %.2f %%", c2, pc3);
		
		printf("\n Cuarto Candidato: %d votos con un %.2f %%", c2, pc4);
		//Mostramos los Votos Totales
		printf("\n Votos Totales: %d votos \n", votosT);
		break;
		//Si se Ingresa Cualquier Otro Teclado Fuera de las Opciones, Mostrar:
		default: printf("\n Opcion invalida \n");
		}
		system("pause"); //detiene el programa hasta que el usuario presione 
		//cualquier tecla
	} while(op!='0');
	//Fin del Programa
	return 0;
}

