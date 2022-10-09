#include <stdio.h>

/*			***** Ni idea, F por mi ****		

	16. Almacene en un vector n números (máximo 10), valide si el tamaño es par e invertir los elementos a la
mitad del arreglo. Imprimir el vector original y el invertido.
	Ejemplo:
		Si n = 6, v = [1][2][3][4][5][6] v(invertido) = [3][2][1][6][5][4].
*/

int main(int argc, char const *argv[])
{
	int vector[6] = {1, 2, 3, 4, 5, 6};
	int n = 0;

	for (int i = 0; i < sizeof(vector) / 4; ++i)
	{
		n++;
	}

	int temp = 0;

	if(n % 2 != 0)
	{
		printf("\nEl vector es impar\n\n");
	}
	else
		printf("\nEl vector es par\n");

	printf("\nEl array sin cambios es:\n\n");
	for (int i = 0; i < n; ++i)
	{
		printf("[%d]", vector[i]);
	}

	printf("\n");

	for (int i = 0; i < n / 2; ++i)
	{
		if (i < 1)
		{
			temp = vector[i];
			vector[i] = vector[n - i - 1];
			vector[n - i - 1] = temp;	
		}

	}

	printf("\nEl array invertido en mitades es:\n\n");

	for (int i = 0; i < n; ++i)
	{
		printf("[%d]\n", vector[i]);
	}

	getch();
	return 0;
}