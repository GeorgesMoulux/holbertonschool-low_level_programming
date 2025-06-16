#include <stdio.h>

/**
 * main - return void
 * Description: affiche la phrase
 * Return: 0; succs
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
