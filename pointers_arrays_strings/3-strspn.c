#include "main.h"

/**
 * _strspn - longueur de accepted dans s
 * @s: chaine a chercher
 * @accept: char accepte
 * Description: nul
 * Return: longeur i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned int j = 0;

	if (s == NULL || accept == NULL)
		return (0);
	while (s[i])
	{
		int found = 0;

		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}
	if (found == 0)
		break;

	count++;
	i++;
	}
	return (count);
}
