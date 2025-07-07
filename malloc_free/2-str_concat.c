#include "main.h"
#include <stdlib.h>
#include <string.h>
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

/**
 * str_concat - dup
 * @s1: string
 * @s2: string
 * Description: nul
 * Return: buffer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int t_size;
	char *buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t_size = _strlen(s1) + _strlen(s2);

	buffer = malloc((t_size + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		buffer[i] = s2[j];
		j++;
		i++;
	}
		buffer[i] = '\0';

	return (buffer);
}
