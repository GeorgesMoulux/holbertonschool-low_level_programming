#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_10 - print 10 times [a -z]
 * Description: affiche la phrase
 * Return: 0; succs
 */

void  putstring(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void print_alphabet_x10(void)
{
	int i;

	while (i <  10)
	{
		putstring("abcdefghijklmnopqrstuvxyz");
		_putchar('\n');
		i++;
	}
}
