#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/* 
3. Almacene en un arreglo, 20 elementos de tipo entero e imprimir:
	a) La suma de los elementos que ocupan posiciones pares.
	b) El mayor de los elementos que ocupan posiciones impares.
	c) La posición del mayor número par.
*/

int main(int argc, char const *argv[])
{
	int cont[20] = {1, 2, 3, 4, 5, 600, 7, 8, 9, 10,
					11, 12, 13, 14, 150, 10, 17, 18, 19, 20};	// Cont sera un array de entero
	int max = 0; // Almacenara la posicion del numero mayor en posiciones pares
	int sum_par = 0; // Sumara todos los numeros en posiciones pares
	int posicion = 0;
	int temp = 0;
	int aux = 0;
	// Forma para sumar numeros en posiciones pares en un array de enteros
	for (int i = 1; i < 20; i+=2)
	{
		sum_par += cont[i];
	}

	// Forma de como hallar el mayor numero en posiciones impares en un array de enteros
	max = cont[0];
	for (int j = 0; j <= 20; j+=2)
	{	
			if(max <= cont[j])
			{
				max = cont[j];
			}
	}

	// Forma de como hallar la posicion del mayor numero par en un array de enteros
	temp = cont[0];	// temp ocupara el primer valor del array
	for (int i = 0; i < 20; i++)
	{
		if(temp < cont[i])	// Si temp es menor a los elementos del array pues...
		{
			temp = cont[i];	// temp tomara el valor del elemento que es mayor a el en el array
			if(temp % 2 == 0)	// Para comprobar que sea par pues no nos debe dar decimales en su division
			{
				aux = i;	// Entonces aux tomara el valor de la posicion de temp (mientras cumpla la condicion de ser par)
			}
		}
	}

	printf("El total de la suma de elementos en posiciones pares es: %d\n", sum_par);
	printf("El mayor elemento de las posiciones impares es: %d\n", max);
	printf("El mayor elemento del vector esta ubicado en el lugar %d\n", aux);
	getch();
	return 0;
}