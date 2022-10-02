#include <stdio.h>
#include <string.h>
#include <math.h>
/*
	7. Almacene en un vector n elementos de tipo real (máximo 25) e imprima los siguientes valores:
		a) Máximo.
		b) Mínimo.
		c) La media de los que estén en posiciones pares.
		d ) La varianza.
*/

int main(int argc, char const *argv[])
{
	int n; // Sera el total de elementos que el usuario decida
	int j = 0; // Contador
	printf("Dime el total de elementos del vector: "); scanf("%d", &n);

	if(n > 25) // Si el usuario supera el limite (25) dara error
	{
		printf("Error\n");
		getch();
		return -1;
	}

	float vector[n]; // Creamos un vector que cuya extension sea la cantidad que el usuario haya decidido

	// Creamos un bucle for que vaya almacenando los valores que el usuario decida
	for (int i = 0; i < n; i++)
	{
		printf("%d- Dime un numero: ", i); scanf("%f", &vector[i]);
	}

	float max = vector[0]; // max tomara el valor del primer elemento del vector
	float min = vector[0]; // min tomara el valor del primer elemento del vector
	float media = 0; // media obtendra la media de los elementos del vector
	float var = 0; // var (varianza) tomara la varianza entre los elementos del vector

	// Creamos un bulce for que recorra todos los elementos del vector
	for (int i = 0; i < n; i++)
	{
		// Si max es menor que un elemento de vector[i] pues...
		if(max < vector[i])
		{
			max = vector[i]; // max tomara el valor de dicho elementos
		}

		// Si min es mayor que un elemento del vector[i] pues...
		if(min > vector[i])
		{
			min = vector[i]; // min tomara el valor de dicho elemento
		}
	}

	// Creamos un bucle for para ir en posiciones pares
	for (int i = 1; i < n; i+=2)
	{
		media += vector[i]; // media almacenara y sumara los elementos del vector que esten en posiciones pares
		j++; // j se incrementara en uno
	}
	media /= j; // Para obtener la media dividimos entre el valor que tome j

	float aux = 0; // Sera usada para sumar el valor de los elementos del vector menos la media

	// Creamos un vector para obtener la varianza
	for (int i = 0; i < n; i++)
	{
		aux += (vector[i] - media); // Obtenemos la suma del valor del vector[i] y lo restamos con la media
		var += pow(aux, 2); // var sumara la potencia del valor que tenga aux al cuadrado
		aux = 0; // volvemos a aux = 0... Para no alterar la varianza
	} 
	var /= n; // Por ultimo, el valor total obtenido de var lo dividimos entre la cantidad de elementos del vector

	// Imprimimos los valores
	printf("El mayor elemento del vector es: %.2f\n", max);
	printf("El menor elementos del vector es: %.2f\n", min);
	printf("La media de los elementos del vector es: %.2f\n", media);
	printf("La varianza del vector es: %.2f\n", var);
	getch();
	return 0;
}