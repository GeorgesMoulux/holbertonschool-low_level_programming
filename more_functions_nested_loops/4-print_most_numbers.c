#include "main.h"

/**
 * print_most_numbers - except deux et quatre
 *
 * Description: a
 * Return: 0; succs
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
