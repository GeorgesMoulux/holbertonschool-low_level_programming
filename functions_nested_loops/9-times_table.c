#include "main.h"

/**
 * times_table - table de multiplication
 *
 * Return: no return
 */

void times_table(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			p = n * m;
			if (p < 10)
			{
				if (m > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
				if (m != 9)
				{
					_putchar(',');
				}
			}
			if (p >= 10)
			{
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (m != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
