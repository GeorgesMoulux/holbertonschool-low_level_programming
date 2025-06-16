#include <stdio.h>

/**
 * main - return void
 * Description: affiche la phrase
 * Return: 0; succs
 */

int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
