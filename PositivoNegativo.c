#include <stdio.h>
int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	int n=1, cp=0, cn=0;
	//El Programa Continua Hasta que se Ingrese un 0
	while(n!=0){
		printf("\n Ingrese un numero: ");
			scanf("%d",&n);
		if (n>0)
			cp++; //Contador de numeros positivos
		else if(n<0)
			cn++; //Contador de números negativos
	}
	//Se Muestran Cuantos Numeros Ingresados Fueron Positivos y Negativos
	printf("\n\n Numeros positivos: %d",cp);
	
	printf("\n\n Numeros negativos: %d",cn);
	//Fin del Programa
	return 0;
}

