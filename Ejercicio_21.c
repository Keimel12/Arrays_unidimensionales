#include <stdio.h>
#include <string.h>
#define MAX 10

/*

	Imprimir las siguientes series:
		
		1 x 9 + 2  = 11
		12 x 9 + 3  = 111
		123 x 9 + 4  = 1111
		1234 x 9 + 5  = 11111
		12345 x 9 + 6  = 111111
		123456 x 9 + 7  = 1111111
		1234567 x 9 + 8  = 11111111
		12345678 x 9 + 9  = 111111111
		123456789 x 9 + 10 = 1111111111

		1
		1 x 1 = 1 
		11 x 11 = 121
		111 x 111 = 12321
		1111 x 1111 = 1234321
		11111 x 11111 = 123454321
		111111 x 111111 = 12345654321
		1111111 x 1111111 = 1234567654321
		11111111 x 11111111 = 123456787654321
		111111111 x 111111111 = 12345678987654321

*/

int main(int argc, char const *argv[])
{

	// ******************************************************************  Parte 1

	// Declaramos un vector y dos strings
	int vector[MAX];
	char str[MAX + 1];
	char aux[MAX + 1];

	// Rellenamos el vector
	for (int i = 1; i < MAX; ++i)
	{
		// Convertira el valor de i en un char que sera almacenado en un auxiliar
		sprintf(aux, "%d", i);

		// Si i es igual o menor de 1...
		if(i <= 1)
		{
			strcpy(str, aux); // copiaremos el valor aux en stre
		}

		// Si i es mayor o igual de 2
		if(i >= 2)
		{
			strcat(str, aux); // Concatenaremos el valor de aux en str
		}

		// Rellenamos el vector desde la posicion i - 1, con la conversion de string a un int
		vector[i - 1] = atoi(str);
	}

	// Imprimimos la primera serie
	for (int i = 2; i <= 10; ++i)
	{
		printf("%d x %d + %d = %d\n", vector[i - 2], 9, i, vector[i - 2] * 9 + i);
	}

	// Borramos los valores que posean los string aux y str
	// Nota: Ojala haberla descubierto en el proyecto final del 2do semestre [.__.]
	memset(str, 0, sizeof(str));
	memset(aux, 0, sizeof(aux));		

	// Declaramos un nuevo vector para la siguiente serie
	// Es usado el unsigned long long ya que de otra forma se desborda al imprimir la serie
	unsigned long long int vector_2[MAX];

	// Rellenamos el vector
	for (int i = 0; i < MAX; i++)
	{
		// Si i es igual a uno...
		if(i == 0)
		{
			// Convertimos el valor de i en un string y luego lo almacenamos en aux
			sprintf(aux, "%d", i);
			strcpy(str, aux);	// Copiamos el valor de aux en str
		}

		// Si i es mayor de 0
		if(i > 0)
		{
			// Guardamos en aux la conversion de entero 1 en un string
			sprintf(aux, "%d", 1);
		}

		// Concatenamos el valor obtenido de aux en str
		strcat(str, aux);
		
		// Rellenamos el vector_2 con la conversion de string a entero de la variable str
		vector_2[i] = atoi(str);

	}

	printf("\n\n\n");

	// Imprimimos la otra serie
	printf("%d\n", 1);
	for (int i = 0; i < MAX; i++)
	{
		if (vector_2[i] == 0)
		{
			continue;
		}
		printf("%llu x %llu = %llu\n", vector_2[i], vector_2[i], (vector_2[i] * vector_2[i]));
	}

	getch();
	return 0;
}