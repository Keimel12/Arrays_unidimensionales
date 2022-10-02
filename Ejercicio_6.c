#include <stdio.h>
#include <string.h>

/*
	6. Inicialice un vector con 10 valores. Genere un vector a con los números negativos y otro vector b con
	los positivos o iguales a cero.
*/

int main(int argc, char const *argv[])
{
	int vector[10] = {0, -1, 2, -3, 4, 5, -6, -7, 0, 0}; // Vector de enteros con los elementos
	int pos = 0; // Variable que contara los elementos posisitivos o ceros
	int neg = 0; // Variable que contara los elementos negativos
	int i; // Contadores
	int j; // Contadores

	// Primer bucle para obtener el total de elementos en pos y neg
	for (i = 0; i < 10; i++)
	{
		if(vector[i] >= 0) // Si al leer el vector hay elementos iguales o mayores a 0...
		{
			pos++; // pos se incrementa en uno
		}

		if(vector[i] < 0) // Si al leer el vector hay elementos menores a 0...
		{
			neg++; // neg se incrementa en uno
		}
	}

	// Creamos dos vectores para ocupar los elementos positivos y otro para los negativos
	int vector_a[pos];
	int vector_b[neg];

	// Igualamos a cero pos y neg
	pos = 0, neg = 0;

	// Creamos el segundo bucle para llenar los vectores
	for (i = 0; i < 10; i++)
	{
			if (vector[i] >= 0) // Si al recorrer el vector encuentra elementos igual o mayores a 0...
			{
				vector_a[pos++] = vector[i]; // vector_a tomara los elementos mayores o iguales en vector
			}
			else // Si no se cumple la condicion...
				vector_b[neg++] = vector[i]; //	vector_b tomara los elementos que no cumplan la condicion
	}

	// Imprimimos los vectores con los elementos ya integrados
	printf("\nLos numeros positivos y cero son: !!!\n");
	for (i = 0; i < pos; i++)
	{
		printf("%d- %d\n", i, vector_a[i]);
	}

	printf("\nLos numero negativos son: !!\n");
	for (i = 0; i < neg; i++)
	{
		printf("%d- %d\n", i, vector_b[i]);
	}
	getch();

	return 0;
}