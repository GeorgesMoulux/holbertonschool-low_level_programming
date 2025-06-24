#include "main.h"

/**
 * swap - swap
 * @a: pointeur
 * @b: pointeur
 * Description: nul
 * Return: 0, ded
 */

void swap_int(int *a, int *b)
{
	int c;

	c  = *a;
	*a = *b;
	*b = c;
}
