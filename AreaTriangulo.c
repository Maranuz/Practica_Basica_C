#include <stdio.h>
#include <math.h>
	
	int main(){
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float a, b, c, s, area; 
	//Solicitamos la longitud de los lados del triangulo
	//Se almacenan en las variables a, b, c
	printf("Ingresa la longitud del lado 1: ");
	scanf("%f", &a);
	
	printf("Ingresa la longitud del lado 2: ");
	scanf("%f", &b);
	
	printf("Ingresa la longitud del lado 3: ");
	scanf("%f", &c);

	s = (a + b + c) / 2;//formula de semiperimetro
	area = sqrt(s * (s - a) * (s - b) * (s - c));//formula de heron
	//Mostramos mensajes con el Resultado
	printf("El area del triangulo es: %.3f", area);
	//Fin del Programa
	return 0;
}
