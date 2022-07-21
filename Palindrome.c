#include <stdio.h>

// Función Iterativa para Verificar si un Numero Dado es un Palíndrome o no
int isPalindrome(int num) {
	// La Variable n Almacena el Entero Dado
	int n = num;
	//La Variable rev Almacena el Reverso del Entero Dado
	int rev = 0;
	
	while (n) {
		//Almacenará el Ultimo Digito de n en la Variable r
		int r = n % 10;
		// Añade r a rev en el Lugar de Uno
		rev = rev * 10 + r;
		//Elimina el Ultimo Dígito de n
		n = n / 10;
	}
	
	return (num == rev);
}

int main(void) {
	printf("************************** \n"
		   "Author: Martin Uzcategui \n"
		   "************************** \n");
	//Se define la Variable
	int n ;
	//Solicitamos que ingrese un numero de 3 digitos
	printf("Ingrese un numero de 3 digitos: ");
	//Se Almacena el Dato Ingresado en la Variable 
	scanf("%d", &n);
	//Validamos que el Dato Ingresado solo Contenga 3 Digitos
	while ((n > 1000) || (n < 100)){
		printf("El numero debe ser de 3 digitos, favor ingresar numero nuevamente: ");
		scanf("%d", &n);
	}
	//junto a la Funcion Iterativa, Indicamos si el Dato Ingresado es Palindrome
	//o no
	if (isPalindrome(n)) {
		printf("Palindrome");
	}
	else {
		printf("No es Palindrome");
	}
	//Fin del Programa
	return 0;
}


