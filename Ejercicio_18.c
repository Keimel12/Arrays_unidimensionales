#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*

	18. Genere aleatoriamente un arreglo unidimensional de n enteros comprendidos entre 1 y 100 e imprima
	otro vector pero sin los elementos repetidos.
*/

int main(int argc, char const *argv[])
{
	time_t t;
	srand((unsigned) time(&t));

	// rm sera una variable con un valor random
	int rm = rand() % 100 + 1;

	int i = 0;
	int j = 0;

	// Creamos dos vectores cuya longitud sea de la variable rm
	int vector_a[rm];
	int vector[rm];

	// Rellenamos los vectores de numeros aleatorios
	for (i = 0; i < rm; ++i)
	{
		vector_a[i] = rand() % 100 + 1;
	}

	// Creamos un bucle para evitar que se repitan los numeros
	for (i = 0; i < rm; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			// Si el recorrido de elementos del vector_a[j] detecta que es igual al de vector_a[i] 
			if(vector_a[j] == vector_a[i])
			{
				// El valor del vector_a[i] sera cambiado por un numero aleatorio
				vector_a[i] = rand() % 100 + 1;	
				// i e j tomaran el valor de 0 (para repetir el bucle y asegurarnos que no haya mas coincidencias)
				i = 0;
				j = 0;
				// Una solucion que imagino que consumo mas memoria de lo normal pero fue lo que se me ocurrio xd
			}
		}
		// Llenamos el vector[i] de los valores no repetitivos de vector_a[i];
		vector[i] = vector_a[i];
	}

	/* Detectar si se repite un numero en el vector donde no se deberia repetir... Triste, lo se Xd
	for (i = 0; i < rm; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			if(vector[j] == vector[i])
			{
				printf("El repitiente es; %d\n", vector[i]);
			}
		}
	}	*/

	// Imprimimos el nuevo vector sin elementos repitientes
	for (i = 0; i < rm; ++i)
	{
		printf("%d\n", vector[i]);
	}

	getch();
	return 0;
}