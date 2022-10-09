#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
	1. Almacene en un arreglo las temperaturas de un día (0-23 horas). Calcule su media e imprimir la
	temperatura más alta y la más baja; asimismo imprimir la hora respectiva. Por ejemplo la temperatura
	media fue de 21.5 grados Celsius, la más alta de 29 grados Celsius a las 14 horas y la más baja de 9.4
	grados Celsius a las 3 horas.
*/

int main(int argc, char const *argv[])
{
	// Evitamos que se repita la misma secuencia de numeros aleatorios
	time_t t;
	srand((unsigned) time(&t));

	// Creamos un vector que ocupara 24 espacios (que seran los grados en cada hora)
	int vector_grades[24];

	// lenght sera la longitud del vector
	int lenght = sizeof(vector_grades) / sizeof(vector_grades[0]);

	// Llenamos el vector de valores aleatorios entre un rango (tampoco seran 100 grados, no hay que pasarse)
	for (int i = 0; i < lenght; ++i)
	{
		vector_grades[i] = rand() % 25 + 10;
	}

	// Creamos diversas variables
	int min = vector_grades[0];  // Tomara el valor minimo
	int hour_min = 0; // Tomara la hora del valor minimo
	int max = vector_grades[0]; // Tomara el valor maximo
	int hour_max = 0; // Tomara la hora del valor maximo
	float media = 0; // obtendra la media

	// Recorremos el vector con el bucle for
	for (int i = 0; i < lenght; ++i)
	{
		// Si el valor de min es mayor que cualquiera del vector_grades...
		if(min > vector_grades[i])
		{
			min = vector_grades[i]; // min tomara el valor del elemento menor
			hour_min = i; // hour_min tomara la hora (tomando como hora, el incremento de i en el bucle)
		}

		// Si el valor de max es menor que cualquiera del vector_grades...
		if(max < vector_grades[i])
		{
			max = vector_grades[i]; // max tomara el valor del elemento mayor
			hour_max = i;  // hour_max tomara la hora (tomando como hora, el incremento de i en el bucle)
		}
		// media almacenara la suma de todos los valores del vector_grades
		media += vector_grades[i];
	}
	// Y por ultimo, media se dividira entre la cantidad de elementos
	media /= lenght;

	// Imprimimos el mensaje
	printf("la temperatura media fue de %.1f grados Celsius, la mas alta de %d grados Celsius a las %d horas y la mas baja de %d grados Celsius a las %d horas\n", media, max, hour_max, min, hour_min);

	getch();
	return 0;
}