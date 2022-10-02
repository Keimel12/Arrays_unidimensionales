#include <stdio.h>

/*
	12. Almacene en un arreglo de n números enteros (máximo 30) y determine cuántos números terminan en
	dígito primo.
*/

int main(int argc, char const *argv[])
{
	int n;
	printf("Dime la extension del vector\n"); scanf("%d", &n);
	if(n > 30)
	{
		printf("Error\n");
		getch();
		return -1;
	}

	int vector[n];
	int number;

	for (int i = 0; i < n; i++)
	{
		printf("%d- Dime un numero: ", i); scanf("%d", &number);
	}

	

	return 0;
}