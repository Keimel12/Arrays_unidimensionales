#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	2. Almacene en un vector la temperatura de cada día de una determinada semana y que realice lo siguiente:
		a) La temperatura promedio.
		b) Un vector que contenga las diferencias de cada temperatura con respecto al promedio.
		c) La menor temperatura y el número de día en que ocurrió.
		d) La mayor temperatura y el número de día en que ocurrió.
*/

int main(int argc, char const *argv[])
{
	// Evitamos que se repita la misma secuencia aleatoria
	time_t t;
	srand((unsigned) time(&t));

	// Creamos un vector que almacene los grados y cada espacio sea un dia
	int vector[7];

	// lenght sera igual a la longitud del vector
	int lenght = sizeof(vector) / sizeof(vector[0]);

	// Llenamos el vector con valores aleatorios
	for (int i = 0; i < lenght; ++i)
	{
		vector[i] = rand() % 20 + 10;
	}

	// Diversas varaobles
	float media = 0;	// almacenara la media del vector
	int max = vector[0]; // almacenara el valor maximo del vector
	int day_max = 0; // almacenara el dia con temperatura maximo del vector
	int min = vector[0]; // almacenara el valor minimo del vector
	int day_min = 0; // almacenara el dia con temperatura minima del vector
	int aux = 0; // auxiliar

	// almacenara la diferencia del promedio (Desviacion media de cada elemento por separado)
	int dif_vector[7];

	// Recorremos los elementos del vector
	for (int i = 0; i < lenght; ++i)
	{
		// Si max es menor que un elemento del vector...
		if(max < vector[i])
		{
			max = vector[i]; // max tomara el valor de dicho elemento
			day_max = i; // day_max tomara el valor de i en la iteracion
		}

		// Si min es mayor que un elemento del vector...
		if(min > vector[i])
		{
			min = vector[i]; // min tomara el valor de dicho elemento
			day_min = i; // day_min tomara el valor de i en la iteracion
		}
		// media almacenara la suma de todos los elementos del vector
		media += vector[i];
	}
	// Y luego, la media se dividira entre la cantidad de numeros del vector
	media /= lenght;

	// Usamos otro bucle para ir almacenando la diferencia con respecto al promedio
	for (int i = 0; i < lenght; ++i)
	{
		aux = 0; // aux sera igual a 0 (para no alterar el valor)
		aux = vector[i] - media; // aux sera igual al valor del vector menos la media
		dif_vector[i] = abs(aux); // dif_vector sera igual al valor absoluto de lo almacenado en aux
	}

	getch();
	return 0;
}