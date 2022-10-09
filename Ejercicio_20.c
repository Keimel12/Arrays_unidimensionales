#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
	20. Almacene 2 vectores a y b de longitudes n y m, el primero ordenado en forma ascendente y el segundo
	ordenado de manera descendente, crear un nuevo vector c de n + m elementos intercalando los
	elementos de a y b de modo que c quede ordenado en forma ascendente.
*/

int main(int argc, char const *argv[])
{
	time_t t;
	srand((unsigned) time(&t));

	int n = rand() % 20 + 1;
	int m = rand() % 10 + 1;

	int vector_a[n];
	int vector_b[m];

	int length_a = sizeof(vector_a) / sizeof(vector_a[0]);
	int length_b = sizeof(vector_b) / sizeof(vector_b[0]); 

	int temp = 0;

	for (int i = 0; i < length_a; i++)
	{
		vector_a[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < length_b; i++)
	{
		vector_b[i] = rand() % 50 + 1;
	}

	// Ordenando de mayor a menor (Si funciona)
	for (int i = 0; i < length_a - 1; i++)
	{
		for (int j = 0; j < length_a - i - 1; j++)
		{
			if(vector_a[j] < vector_a[j + 1])
			{
				temp = vector_a[j];
				vector_a[j] = vector_a[j + 1];
				vector_a[j + 1] = temp;
			}
		}
	}

	// Ordenando de menor a mayor (Si funciona)
	for (int i = 0; i < length_b - 1; i++)
	{
		for (int j = 0; j < length_b - i - 1; j++)
		{
			if(vector_b[j] > vector_b[j + 1])
			{
				temp = vector_b[j];
				vector_b[j] = vector_b[j + 1];
				vector_b[j + 1] = temp;
			}
		}
	}

	int vector_c[n + m];
	int length_c = sizeof(vector_c) / sizeof(vector_c[0]);

	for (int i = 0; i < length_c - 1; i++)
	{
		for (int j = 0; j < length_c - i - 1; j++)
		{
			if(vector_a[i] < vector_b[j])
			{
				temp = vector_b[j];
				vector_b[j] = vector_a[i];
				vector_a[i] = temp;
			}

		}
		vector_c[i] = temp;
	}

	for (int i = 0; i < length_c; i++)
	{
		printf("%d\n", vector_c[i]);
	}

	getch();
	return 0;
}