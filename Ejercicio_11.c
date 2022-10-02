#include <stdio.h>

/*
	11. Almacene en un vector de tamaño 10 números reales. Calcule el promedio e indique cuántos elementos
	del vector son mayores que el promedio y genere otro arreglo con los menores o iguales.
*/

int main(int argc, char const *argv[])
{
	int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 20, 10}; // vector de enteros
	float media = 0; // almacenara el valor de la media del vector
	int i; // contador
	int may = 0; // almacenara la cantidad de elementos mayores a la media
	int min = 0; // almacenara la cantidad de elementos menores a la media

	for (i = 0; i < 10; i++)
	{
		media += vector[i]; // media sumara todos los elementos del vector
	}
	media /= i; // media se dividira entre el total de numeros del vector (para obtener la media) 

	//Creamos un bucle para hallar la cantidad de elementos mayores o menores a la media
	for (int i = 0; i < 10; i++)
	{
		if(vector[i] > media) // si en el vector hay elementos mayores a la media...
		{
			may++; // may se incrementa en uno
		}

		if(vector[i] < media) // Si en el vector hay elementos menores a la media...
		{
			min++; // min se incrementa en uno
		}
	}

	// Creamos dos nuevos vectores a partir del total de elementos mayores y menores a la media
	int vector_may[may];
	int vector_min[min];

	// Igualamos min y may a 0
	min = 0, may = 0;

	// Creamos un bucle para almacenar los numeros mayores y menores a cero
	for (int i = 0; i < 10; i++)
	{
		if(vector[i] > media) // Si en el recorrido del vector hay elementos mayores a la media...
		{
			vector_may[may++] = vector[i]; // vector_may almacenara los elementos mayores a la media
		}

		if(vector[i] < media) // Si en el recorrido del vector hay elementos menores a la media...
		{
			vector_min[min++] = vector[i]; // vector_min almacenara los elementos menores a la media
		}
	}

	printf("Los elementos mayores de la media son: \n");
	// Imprimimos los elementos que son mayores a la media, usando el vector_may
	for (int i = 0; i < may; i++)
	{
		printf("%d\n", vector_may[i]);
	}
	// Indicamos el total de elementos mayores a la media
	printf("\nEs decir, %d numeros son mayores que la media\n\n", may);

	printf("Los elementos menores a la media son: \n");
	//Imprimimos los elementos menores a la media, usando el vector_min
	for (int i = 0; i < min; i++)
	{
		printf("%d\n", vector_min[i]);
	}
	// Indicamos el total de elementos menores a la media
	printf("\nEs decir, %d numeros son menores que la media\n", min);

	getch();
	return 0;
}