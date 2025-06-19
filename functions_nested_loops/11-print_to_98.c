#include "main.h"

/**
 * printnbr - affiche nbr
 * @n: nb de depart
 *
 * Return: no return
 */
void printnbr(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printnbr(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - affiche suite de nb
 * @n: le nb de depart
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printnbr(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	printnbr(98);
	_putchar('\n');
}
