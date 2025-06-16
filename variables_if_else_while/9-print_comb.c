#include <stdio.h>

/**
 * main - return void
 * Description: affiche la phrase
 * Return: 0; succs
 */

int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n < 9)
			putchar(',');
		if (n < 9)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
