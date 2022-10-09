#include <stdio.h>
#include <string.h>

/*
	FALTA POR TERMINAR


	15. Guarde una cadena y genere otro vector con las veces que se repite cada letra.
	Ejemplo:
		En la cadena CASAS generará el arreglo con los valores: 1,2,2,2,2.
*/


int main(int argc, char const *argv[])
{
	char str[16] = {"paralelepipedo"}; // Creamos la cadena con una frase cualquiera
	int cont = 0; // Contador
	int length = strlen(str); // lenght tendra la longitud de la cadena str 
	int vector[length]; // Con el tamaño almacenara length, creamos un vector con una extension igual
	int max = 0;
	printf("En la cadena %s se genera los siguiente valores\n\n", str);

	// Bucle principal
	for (int i = 0; i < length; ++i)
	{
		cont = 0; // Cada vez que el bucle secundario termine cont se igualara a 0
		max = 0;
		// Bucle secundario (usado para contar las veces que se repite las palabras)
		for (int j = 0; j < length; ++j)
		{
			if(str[i] == str[j])
			{
				cont++; // cont se incrementa en uno
			}

			if (max < str[i])
			{
				max = cont;
			}

			// vector[j] almacenara el valor de cont
			vector[j] = max;
		}
		// Se imprime el resultado
		printf("%c - %d\n", str[i], vector[i]);
	}


	getch();
	return 0;
}