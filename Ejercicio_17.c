#include <stdio.h>

/*
	17. Almacene en dos vectores números reales a y b de 10 elementos cada uno, a partir de ellos genere un
	tercer vector con el siguiente criterio: sumar el primer elemento de a más el último elemento de b y
	luego el segundo elemento de a con el noveno elemento de b y así sucesivamente hasta llegar al décimo
	elemento de a más el primer elemento de b. Imprimir las sumas almacenadas en el vector c.
*/

int main(int argc, char const *argv[])
{
	// Creamos los 3 vectores con numeros reales
	float vector_a[10] = {1.4, 2.6, 8.3, 10.1, 9.9, 14.2, 3.2, 12.7, 5.2, 6.1};
	float vector_b[10] = {6.1, 5.2, 12.7, 3.2, 14.2, 9.9, 10.1, 8.3, 2.6, 1.4};
	float vector_c[10];

	// Un contador
	int cont_2 = 0;

//	printf("%d\n", sizeof(vector_a));

	// Un bucle que se repetira la cantidad de elementos que posea el vector_a
	// Para ello, usamos el sizeof para obtener el numero de bits que ocupa el vector y de ahi lo dividimos entre 4 ()
	for (int i = 0; i < sizeof(vector_a) / 4; ++i)
	{
		cont_2++; // cont se incrementa
	}

	// Usamos otro bucle para llenar el vector_c de la suma
	for (int i = 0; i < sizeof(vector_b) / 4; ++i)
	{
		// cont_2(que tomara el valor de 10) se decrementara con cada iteracion en uno (asi obtenemos el ultimo elemento del vector y bajando)
		cont_2--; 

		// vector_c se llena de la suma del vector_b con el vector_a
		vector_c[i] = vector_b[cont_2] + vector_a[i];
	}

	// Imprimimos el resultado
	for (int i = 0; i < sizeof(vector_c) / 4; ++i)
	{
		printf("[%.1f]\n", vector_c[i]);
	}

	getch();
	return 0;
}