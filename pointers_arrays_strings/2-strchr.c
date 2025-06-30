#include "main.h"

/**
 * _strchr - cherche occurence de c
 * @s: string
 * @c: occurence a chercher
 * Description: lol
 * Return: nul
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		else if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (0);
}
