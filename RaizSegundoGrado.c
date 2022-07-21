#include <stdio.h>
#include <math.h> //Utilizamos la Libreria Matematica

int main(int argc, char *argv[]) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
//Definimos Variables
	float a, b, c, discriminante, raiz1, raiz2;
//Solicitamos los coeficientes y almacenamos en sus respectivas variables
	printf("Ingrese el coeficiente a: ");
	scanf("%f", &a);
	
	printf("Ingrese el coeficiente b: ");
	scanf("%f", &b);
	
	printf("Ingrese el coeficiente c: ");
	scanf("%f", &c);
//Operador del discriminante
	discriminante = b*b - (4*a*c);
//Condicional if, si discriminante es menor que 0 entonces imprimir un mensaje
	if (discriminante < 0) {
//Si se cumple la condicion se imprime el mensaje
		printf("Las raíces son imaginarias");
	}
//Condicional else if, de lo contrario si discriminantes es igual a o entonces
		else if (discriminante == 0) {
	//Operadores para la ecuacion
		raiz1 = -b/2*a;
		raiz2 = raiz1;
	//Se imprime un mensaje con los resultados
		printf("Las raíces son iguales \n" "raiz 1: %.2f \n" "raiz 2: %.2f", raiz1, raiz2);
		}
//Si ninguna condicion anterior se cumple entonces
	else {
	//Operadores para la ecuacion
		raiz1= (-b+ sqrt (discriminante))/(2*a);
		raiz2= (-b- sqrt (discriminante))/(2*a);
	//se imprime un mensaje con los resultados
		printf("Las raíces son diferentes \n" "raiz 1: %.2f \n" "raiz 2: %.2f", raiz1, raiz2);
	}
//Fin Programa
	return 0;
}

