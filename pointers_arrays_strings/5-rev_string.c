#include "main.h"

/**
 * print_rev- rev string
 * @s: string
 * Description: nul
 * Return: 0, ded
 */

void swap_char(char *a, char *b)
{
        int c;

        c  = *a;
        *a = *b;
        *b = c;
}

#include "main.h"

/**
 * _strlen - taille string
 * @s: pointeur
 * Description: nul
 * Return: 0, ded
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;
        return (i);
}

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);

	while (i < j)
	{
		swap_char(&s[i], &s[j]);
		i++;
		j--;
	}
}
