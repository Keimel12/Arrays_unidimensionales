#include <stdio.h>

// 		NO DETECTA 5 COMO PRIMO PERO MEH

/*
	12. Almacene en un arreglo de n números enteros (máximo 30) y determine cuántos números terminan en
	dígito primo.
*/

int prime(int num);

int main(int argc, char const *argv[])
{
	int n;
	// Hacemos que el usuario decida la extension del vector
	printf("Dime la extension del vector\n"); scanf("%d", &n);
	
	// Si la extension suepara los 30 elementos dara error
	if(n > 30)
	{
		printf("Error\n");
		getch();
		return -1;
	}

	int vector[n]; // Creamos un vector con la extension de n
	int pr = 0; // Almacenara el total de elementos con digitos finales primos
	int aux = 0; // auxiliar

	// Usamos un bucle para llenar el vector
	for (int i = 0; i < n; i++)
	{
		printf("%d- Dime un numero: ", i); scanf("%d", &vector[i]);
	}

	// Hacemos uso de otro bucle para acceder al ultimo digito
	for (int i = 0; i < n; i++)
	{	
		if(vector[i] > 9) // Si los elementos del vector es mayor a 9...
		{
			vector[i] %= 10; // El elemento ahora valdra a su modulo de 10
		}
	}

	// Usamos un bucle para determinar si los ultimos digitos son primos
	for (int i = 0; i < n; i++)
	{
		// aux sera igual al valor obtenido en prime (0 o 1)
		aux = prime(vector[i]);
		// Si aux es igual a uno...
		if(aux == 1)
		{
			pr++; // pr se incrementa
		}
		
	}

	//Imprimimos resultado
	printf("Hay un total de %d numeros que terminan con digito primo\n", pr);
	


	getch();
	return 0;
}

// Determina si un numero es primo
int prime(int num)
{

	for (int i = 2; i < num/2; ++i)
	{
		if(num < 2)
		{
			return 0;
		}

		if(num == 2)
		{
			return 1;
		}

		if(num % i == 0)
		{
			return 0;
		}
		return 1;
	}
}