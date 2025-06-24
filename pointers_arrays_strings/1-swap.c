#include "main.h"

/**
 * swap_int - swap
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
