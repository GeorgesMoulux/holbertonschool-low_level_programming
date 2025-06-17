#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- print 10 times [a -z]
 * Description: affiche la phrasef
 * Return: 0; succs
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');
	}
}
