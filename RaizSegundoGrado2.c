#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Definimos Variables
	float a, b, c, x1, x2, des;
	//Solicitamos los Datos
	printf("Cual es el valor de a: ");
	scanf("%f",&a);
	
	printf("Cual es el valor de b: ");
	scanf("%f",&b);
	
	printf("Cual es el valor de c: ");
	scanf("%f",&c); 
	//Operador del discriminante
	des=pow(b,2)-(4*a*c);
//Condicional if, si discriminante es igual a 0 entonces imprimir un mensaje
	if (des==0)
	{
		x1=(-b)/(2*a);
		printf("El valor de x es x=%.4f\n",x1);   
	}
//De lo contrario
	else {
		//Si la variable des es mayor a 0, imprimir mensaje
		if(des<0)
		
		printf("No tiene solucion\n");
		//Si no se cumple la condicion anterior
		else {
			//operadores de la ecuacion
			x1=((-b)+sqrt(des))/(2*a);
			x2=((-b)-sqrt(des))/(2*a);
			//se imprime el resultado
			printf("Los valores de x son \nx1= %.4f\nx2= %.4f\n",x1,x2);
		}
	}	

	return 0;
}
