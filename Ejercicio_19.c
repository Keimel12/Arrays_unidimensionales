#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*	
	19. Almacene un vector de longitud n ordenado en forma ascendente y un elemento x del mismo tipo que
	los elementos del vector, intercalar x en el vector v de manera que siga ordenado.
*/

int main(int argc, char const *argv[])
{
	// Evitamos que se repita la misma secuencia de numeros aleatorios
	time_t t;
	srand((unsigned) time(&t));

	// n tomara un valor aleatorio entre el 20 al 1
	int n = rand() % 20 + 1;

	// vector tomara la longitud de n
	int vector[n];

	// temp sera usada para el ordenamiento burbuja
	int temp = 0;

	// length nos dara la cantidad maxima de elementos que posee vector
	int length = sizeof(vector) / 4;

	// Llenamos el vector con numeros aleatorios
	for (int i = 0; i < length; ++i)
	{
		vector[i] = rand() % 20 + 1;
	}

	printf("\nElementos antes de ordenar\n");

	// Imprimimos los elementos sin ordenar
	for (int i = 0; i < length; ++i)
	{
		printf("%d\n", vector[i]);
	}

	// Hacemos uso de ordenamiento burbuja para ordenarlo en orden ascendente
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if(vector[j] < vector[j + 1])
			{
				temp = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = temp;
			}
		}
	}

	// Damos al vector un espacio extra (por el elemento a intercalar)
	vector[n + 1];
	int fijo = 10; // fijo sera el elemento a intercalar cuyo valor sera 10
	int cont = 0; // contador

	// Recorremos el bucle con el elemento extra
	for (int i = 0; i < length + 1; ++i)
	{
		// Si en el vector hay elementos con valores superiores a 10...
		if(vector[i] > 10)
		{
			// cont se incrementa
			cont++;
		}
	}

	// Cambiamos las posiciones de los valores en el vector
	for (int i = length + 1 - 1; i > cont; --i)
	{
		vector[i] = vector[i - 1];
	}
	// Intercalamos el elementos con el valor obtenido en cont, pero restandole 1
	vector[cont - 1] = fijo;

	printf("\nElementos ordenados e intercalado\n\n");

	// Imprimimos el resultado
	for (int i = 0; i < length + 1; ++i)
	{
		printf("%d\n", vector[i]);
	}

	getch();
	return 0;
}