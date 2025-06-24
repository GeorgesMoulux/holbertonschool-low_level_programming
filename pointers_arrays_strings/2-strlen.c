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
