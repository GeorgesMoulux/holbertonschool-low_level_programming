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

void puts_half(char *str)
{
	int j = (_strlen(str) - 1);
	int mid = j / 2;

	while (str[mid] != '\0')
	{
	write(1, &str[mid + 1], 1);
	mid++;
	}
	_putchar('\n');
}
