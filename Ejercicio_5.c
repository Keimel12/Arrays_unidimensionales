#include <stdio.h>
#include <string.h>

/*
	5. Almacene en una lista 15 números e imprimir cuántos son ceros, cuántos son negativos y cuántos
	positivos. Imprimir además la suma de los negativos y la suma de los positivos.
*/

int main(int argc, char const *argv[])
{
	// Vector sera un array de enteros de 15 elementos
	int vector[15] = {0, 1, -3, 0, 4, -10, 0, 0, 8,
					  0, -5, -11, 20, 0, -7};
	int iszero = 0; // Se encargara de contar el total de numeros 0
	int isnegative = 0; // Se encargara de contar el total de numeros positivos
	int ispositive = 0; // Se encargara de contar el total de numeros negativos
	int sum_pos = 0; // Sumara todos los numeros positivos
	int sum_neg = 0; // Sumara todos los numeros negativos

	// Creamos un bucle for para comenzar a contar cada elemento del vecto
	for (int i = 0; i < 15; i++)
	{
		// Si en el vector detecta un 0... iszero aumentara en uno (lo cuenta)
		if(vector[i] == 0)
		{
			iszero++;
		}
		// Si en el vector detecta un numero mayor a 0... ispositive aumentara en uno (es positivo)
		if(vector[i] > 0)
		{
			ispositive++;
			sum_pos += vector[i]; // sum_pos almacenara la suma los elementos del vector que sean positivos 
		}
		// Si en el vector detecta un numero menor a 0... isnegative aumentara en uno (es negativa)
		if(vector[i] < 0)
		{
			isnegative++;
			sum_neg += vector[i]; // sum_neg almacenara la suma de los elementos del vector que sean negativos
		}
	}
	printf("Hay un total de ceros de: %d\n", iszero);
	printf("Hay un total de positivos de: %d\n", ispositive);
	printf("Hay un total de negativos de: %d\n", isnegative);	
	printf("\nEl total de sumar los positivos es; %d\n", sum_pos);
	printf("El total de sumar los negativos es: %d\n", sum_neg);
	getch();
	return 0;
}