#include "main.h"

/**
 * print_last_digit - print le dernier chiffre dun nb
 *
 * @n: number
 * Description: a
 * Return: 0; succs
 */

int print_last_digit(int n)
{
	int last;

	last = n %  10;
	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
