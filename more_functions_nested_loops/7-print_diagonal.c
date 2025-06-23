#include "main.h"

/**
 * print_diagonal - print line
 *@n: num
 * Description: a
 * Return: 0; succs
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
			_putchar(' ');
	_putchar('\\');
	_putchar('\n');
		}
}
