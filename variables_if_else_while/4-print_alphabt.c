#include <stdio.h>

/**
 * main - return void
 * Description: affiche la phrase
 * Return: 0; succs
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
