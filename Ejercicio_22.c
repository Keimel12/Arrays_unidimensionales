#include <stdio.h>
#include <stdint.h>

/*

	22.Leer un número entero positivo e imprimirlo separado dígito por dígito.
		Ejemplo:
		Si  N = 123456, imprimirá 1 2 3 4 5 6.

*/

int main(int argc, char const *argv[])
{
	int n;

	printf("Dime un numero\n");
	scanf("%d", &n);

	int aux = n;
	int cont = 1;

	while(aux > 9)
	{
		aux /= 10;
		cont++;
	}

	char str[cont];

	sprintf(str, "%d", n);

	for (int i = 0; i < cont; ++i)
	{
		printf("%c ", str[i]);
	}

	getch();
	return 0;
}