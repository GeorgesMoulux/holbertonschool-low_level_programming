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
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
	i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
