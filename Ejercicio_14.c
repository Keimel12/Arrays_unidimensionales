#include <stdio.h>

/*
	14. Almacene en un arreglo n números enteros y determine ¿cuántas veces se repite cada uno de ellos?
		Ejemplos:
			Si n = 6 y los elementos del arreglo son: 3,4,6,6,4,6, se imprimirá:
			3 = 1
			4 = 2
			6 = 3
*/

int main(int argc, char const *argv[])
{
	int vector[10] = {3, 4, 6, 6, 3, 8, 4, 6, 1, 0}; // Creamos un array de enteros
	int j = 0; // Contador
	int aux = 0; // Contador de repeticiones

	// Creamos un bucle inicial para recorrer todo el array
	for (int i = 0; i < 10; i++)
	{
		aux = 1; // aux sera igual a uno, ya que se contara la aparicion de la primera letra

		// Creamos un bucle secundario que recorrera todos los elementos anteriores al bucle principal
		for (j = 0; j < i; j++)
		{
			// Si en el vector[i] hay un elemento igual al vector[j]...
			if (vector[i] == vector[j])
			{
				aux++; // aux se incrementa (dando a entender que se repite el elemento)
			}

			// Si hay un elemento en el vector[j + 1] igual al vector[i]...
			if(vector[j + 1] == vector[i])
			{
				continue; // se saltara (pero se contara)... Esto para evitar que en el terminal aparezca mas de una vez un mismo numero
			}

			// Si en el vector[j] es igual al vector[i]...
			if(vector[j] == vector[i])
			{
				printf("%d = %d\n", vector[j], aux); // Imprimira el elemento en j y la cantidad de veces que aparece.
			}
		}
	}

	getch();
	return 0;
}