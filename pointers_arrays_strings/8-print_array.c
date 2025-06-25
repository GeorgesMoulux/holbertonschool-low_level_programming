#include "main.h"

/**
 * print_array - print tab
 * @a: pointeur sur le debut de la chaine
 * @n: taille du tableau
 * Description: nul
 * Return: 0, ded
 */

void print_array(int *a, int n)
{
	int *p = 0;

	for (p = a; p < a + n; p++)
	{
		if (p != a + n - 1)
			printf("%d, ", *p);

		else
			printf("%d\n", *p);
	}
}
