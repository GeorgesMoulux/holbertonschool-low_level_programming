#include "main.h"

/**
 * print_sign - imprime le signe
 * @n: number
 * Description: affiche la phrase
 * Return: 0; succs
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
