#include <stdio.h>

/*
	13. Convierta un número entero decimal a su equivalente en representación binaria.
*/

int main(int argc, char const *argv[])
{
	int number;
	int aux = 0;
	int j = 0;
	int i = 0;

	printf("Dime el numero a convertir: "); scanf("%d", &number);

	// aux sera igual al calor de number (esto para no altera el valor de number)
	aux = number;

	// Mientras aux sea mayor  1...
	while(aux > 1)
	{
		aux /= 2; // aux sera igual a su division entre 2 
		j++; // j se incrementa mientra suceda la concidion
	}
	j++; // j se incrementa una vez mas para agregar el uno (1) al final del binario

	// Creamos un vector con una extension igual a j
	int vector[j];	

	// Ahora creamos un ciclo while que se ejecutara mientras j sea mayor a cero..
	while(j > 0)
	{
		// Si el valor de number da como residuo un valor distinto a 0...
		if(number % 2 != 0)
		{
			vector[i++] = 1; // Agregara en la posicion i del vector un 0
		}

		// De lo contrario... (residuo igual a 0)
		else
			vector[i++] = 0; // Se agregar en la posicion i del vector un 1
		
		number /= 2; // Number tendra como nuevo resultado su division entre 2
		j--; // j se decrementa
	}

	// Imprimimos el resultado
	for (int k = i - 1; k >= 0; --k)
	{
		printf("%d", vector[k]);
	}

	getch();
	return 0;
}