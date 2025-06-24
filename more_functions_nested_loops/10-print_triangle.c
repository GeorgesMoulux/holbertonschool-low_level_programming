#include "main.h"

/**
 * print_square - print square
 *@size: size of square
 * Description: a
 * Return: 0; succs
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - j - 1; i++)
			_putchar(' ');
		for (k = 0; k <= j; k++)
			_putchar('#');
		_putchar('\n');
	}
}
