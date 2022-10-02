#include <stdio.h>
#include <string.h>

/*
	4. Almacene en un arreglo, n elementos (máximo 30) e imprimir la suma:
	a) de números pares.
	b) de números impares.
	c) total de los elementos del arreglo.
*/

int main(int argc, char const *argv[])
{
	int cant; // Variable para que el usuario decida el total del array de entero
	int sum_par = 0; // Variable que tendra el valor de los elementos pares 
	int sum_impar = 0; // Variable que tendra el valor de los elementos impares
	int total = 0; // Variable que dara el total de la suma de los pares e impares

	printf("Dime la cantidad de elementos para el vector: \n"); scanf("%d", &cant);
	int vector[cant]; // Una vez decidido el tamaño, creamos un vector que tendra el tamaño del tamaño dado

	// Si el vector supera los 30 elementos dara un mensaje de error y terminara el programa
	if(cant > 30)
	{
		printf("Excediste el limite del array\n");
		getch();
		return -1;
	}
	// Creamos un bucle for para comenzar a llenar el for de numeros
	for (int i = 0; i < cant; i++)
	{
		printf("Dime un numero para el vector: "); scanf("%d", &vector[i]);
	}
	// Creamos otro bucle para obtener la suma de numeros pares e impares
	for (int i = 0; i < cant; i++)
	{
		// Si es divisible entre dos, lo tomara como un numero par
		if(vector[i] % 2 == 0)
		{
			sum_par += vector[i]; // sum_par almacenara la suma de los elementos pares
		}

		// Si su division entre dos da decimales, se considera como un impar
		if(vector[i] % 2 == 1)
		{
			sum_impar += vector[i]; // sum_impar almacenara la suma de los elementos impares
		}
	}
	total = sum_par + sum_impar; // Es la suma de la totalidad de los elementos pares con los impares

	printf("El total de sumar los numeros pares es: %d\n", sum_par);
	printf("El total de sumar los numeros imapares es: %d\n", sum_impar);
	printf("El total de todos los elementos es: %d", total);
	getch();
	return 0;
}