#include "main.h"

/**
 * print_rev- rev string
 * @s: string
 * Description: nul
 * Return: 0, ded
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
}
