#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/*
	10. Genere aleatoriamente un vector de tamaño 20 con números comprendidos entre 1 y 20 e imprimir:
		a) Suma de los elementos.
		b) Promedio de los elementos.
		c) Varianza y desviación estándar de los valores.
		d ) Elemento que más se repite (moda).
*/

int main(int argc, char const *argv[])
{
	time_t t; 
	srand((unsigned) time(&t)); // usamos srand para evitar que se repita el mismo numero (a pesar de ser aleatorio)

	int n = rand() % 21 + 1; // n sera un numero aleatorio entre 1 y 20
	int vector[n]; // vector tomara una extension de n elementos

	// Creamos un bucle para llenarlo de numeros aleatorios
	for (int i = 0; i < n; i++)
	{
		vector[i] = rand() % 21 + 1;
	}

	int sum = 0; // almacenara el total de la suma de todos los elementos del vector
	float media = 0; // almacenara el valor de la media de todos los elementos del vector
	float var = 0; // almacenara el valor de la varianza del vector
	int aux = 0; // sera usado como un auxiliar para distintos procesos
	float des_est = 0; // almacenara la desviacion estandar del vector


	for (int i = 0; i < n; i++)
	{
		sum += vector[i]; // sum sumara todos los elementos del vectot
	}

	// Se hace en partes porque juntos no toma en cuenta los decimales
	
	media = sum; // media tomara el valor de la sum
	media /= n; // media se dividira entre el total de numeros del vector (para si conseguir la media)

	// Cremaos un bucle para calcular la varianza
	for (int i = 0; i < n; i++)
	{
		aux = vector[i] - media; // aux es igual a elemento i del vector (vector[i]) menos la media
		var += pow(aux, 2); // var sumara el valor obtenido del aux y potenciado al cuadrado
		aux = 0; // aux sera igual a cero pero no alterar el resultado de la varianza
	}
	var /= n; // var se dividira entre el total de numeros del vector

	// Creamos un bucle para calcular la desviacion estandar
	for (int i = 0; i < n; ++i)
	{
		aux = vector[i] - media; // usamos nuevamente el aux para que sea igual al elemento i del vector (vector[i]) menos la media
		des_est += pow(aux, 2); // des_est sumara el valor de la potencia de aux al cuadrado
		aux = 0; // volvemos aux 0 para no alterar el resultado de desviacion estandar
	}
	des_est /= n; // el resultado de la desviacion estandar se dividira entre el total de numeros del vector
	des_est = sqrt(des_est); // Por ultimo, el resultado de des_est le sacamos raiz cuadrado para finalizar

	int max_value = 0; // variable que arrojara la moda
	int max_cont = 0;  // variable que cambiara el valor que pueda ser la moda

	for (int i = 0; i < n; i++)
	{
		aux = 0; // igualamos el aux a ceor
		for (int j = 0; j < i; j++)
		{
			// Si el elemento del vector[j] es igual al vector[i]...
			if(vector[j] == vector[i])
			{
				aux++; // aux se incrementa (haciendo saber que el elemento se repite)
			}

			// Si aux es mayor que max_cont...
			if(aux > max_cont)
			{
				max_cont = aux; // max_cont tomara el valor de aux
				max_value = vector[i]; // max_value tomara el valor de vector[i] (es decir, del elemento que mas se repita)
			}
		}
	}

	// Un bucle for para imprimir los numeros aleatorios del vector
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", vector[i]);
	}

	// Imprimimos los resultados
	printf("El total de n es: %d\n", n);
	printf("La suma de los elementos del vector es: %d\n", sum);
	printf("El promedio(media) de los elementos es: %.2f\n", media);
	printf("La varianza del vector es: %.2f\n", var);
	printf("La desviacion estandar es: %.2f\n", des_est);
	printf("La moda del vector es: %d\n", max_value);
	getch();
	return 0;
}