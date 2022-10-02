#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	8. Genere aleatoriamente un vector de tamaño 20 con números entre 0 y 150 y genere otras tres listas con
	los siguientes criterios:
		a) Si los números están comprendidos entre 0 y 50 irán en la lista 1.
		b) Si los números están comprendidos entre 51 y 100 irán en la lista 2.
		c) Si los números son mayores a 101 irán en la lista 3.
	Al final imprimir las cuatro listas.
*/

int main(int argc, char const *argv[])
{
	time_t t; // Usamos time_t y le adjuntamos una variable
	srand((unsigned) time(&t)); // Para evitar que se repita un numero en rand() usamos srand()
	
	int n = rand() % 20; // n sera igual a un numero aleatorio entre el 1 y 19
	int vector[n]; // vector tendra una extension de n numeros
	int low = 0; // Sera usado para definir la extension de otro vector y almacenar elementos
	int medium = 0; // Sera usado para definir la extension de otro vector y almacenar elementos
	int high = 0; // Sera usado para definir la extension de otro vector y almacenar elementos

	// Creamos un bucle for y almacenara numeros aleatorios del 1 al 149
	for (int i = 0; i < n; i++)
	{
		vector[i] = rand() % 150;
	}

	// Creamos un bucle for para recorrer los elementos del vector 
	for (int i = 0; i < n; i++)
	{
		if (vector[i] <= 50) // Si al recorrer el vector hay elementos menores o iguales a 50...
		{
			low++; // low se incrementa en uno.
		}

		if((vector[i] >= 51) && (vector[i] <= 100)) // Si al recorrer el vector hay elementos mayores o iguales a 51 y a la vez menores o iguales a 100...
		{
			medium++; // medium se incrementa
		}

		if (vector[i] >= 101) // Si al recorrer el vector hay elementos mayores o iguales a 101
		{
			high++; // hugh se incrementa
		}	
	}
	// Definimos varias variables
	int lista_1[low]; // lista_1 tendra la extension de low
	int lista_2[medium]; // lista_2 tendra la extension de medium
	int lista_3[high]; // lista_3 tendra la extension de high

	// Hacemos que low, medium y high igual a 0... esto con el fin de usarlos luego
	low = 0, medium = 0, high = 0;

	// Creamos un bucle for para almacenar los elementos del vector a las listas segun su condicion
	for (int i = 0; i < n; i++)
	{
		if(vector[i] <= 50)
		{
			lista_1[low++] = vector[i]; 
		}

		if((vector[i] >= 51) && (vector[i] <= 100))
		{
			lista_2[medium++] = vector[i];
		}

		if(vector[i] >= 101)
		{
			lista_3[high++] = vector[i];
		}	
	}

	// Imprimimos el vector y las listas
	printf("\nElementos totales del vector\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", vector[i]);
	}

	printf("\nElementos menores a 50 del vector\n\n");
	for (int i = 0; i < low; i++)
	{
		printf("%d\n", lista_1[i]);
	}

	printf("\nElementos mayores a 51 y menores a 100 del vector\n\n");
	for (int i = 0; i < medium; i++)
	{
		printf("%d\n", lista_2[i]);
	}

	printf("\nElementos mayores a 101\n\n");
	for (int i = 0; i < high; i++)
	{
		printf("%d\n", lista_3[i]);
	}	

	getch();
	return 0;
}