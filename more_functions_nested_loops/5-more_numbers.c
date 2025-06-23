#include "main.h"

/**
 * more_numbers - print num
 *
 * Description: a
 * Return: 0; succs
 */

void more_numbers(void)
{
	int j;

	for (j = 0; j < 11; j++)
	{
		int i = 0;

		while (i < 15)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
	}
}
