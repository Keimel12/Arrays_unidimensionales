#include <stdio.h>
#include <string.h>

/*
	Almacene en un vector 10 números y cambie algún número por otro del mismo arreglo, realice el cambio
	y muestre el arreglo modificado.
*/

int main(int argc, char const *argv[])
{
	int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Creamos un vector de enteros
	int camb = 0; // camb almacenara la posicion a cambiar
	int n; // obtendra el nuevo valor del elemento

	printf("Dime la posicion a cambiar el numero: \n"); scanf("%d", &camb);
	
	// si supera la cantidad de elementos del vector dara error
	if(camb > 10)
	{
		printf("Error\n");
		return -1;
	}

	printf("Dime el nuevo numero: \n"); scanf("%d", &n);

	// Creamos un bucle para recorrer el vector
	for (int i = 0; i <= 10; i++)
	{
		if(i == camb) // Si al incrementar i llega al punto de ser igual al valor de camb...
		{
			vector[i - 1] = n; // vector[i menos 1], se resta ya que el vector esta un elemento por delante... se cambiara el valor del elemento
		}
	}

	// Imprimos el vector con el cambio  
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", vector[i]);
	}

	getch();
	return 0;
}