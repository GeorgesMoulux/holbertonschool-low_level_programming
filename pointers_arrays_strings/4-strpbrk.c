#include "main.h"

/**
 * _strpbrk - longueur de accepted dans s
 * @s: chaine a chercher
 * @accept: char accepte
 * Description: nul
 * Return: reste de chaine av occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL || accept == NULL)
		return (0);
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	i++;
	}
	return (0);
}
