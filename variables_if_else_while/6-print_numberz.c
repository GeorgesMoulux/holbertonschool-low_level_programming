#include <stdio.h>

/**
 * main - return void
 * Description: affiche la phrase
 * Return: 0; succs
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
