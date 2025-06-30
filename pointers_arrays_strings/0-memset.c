#include "main.h"
/**
 * _memset - copie n fois b a la suite en memoire
 * @s: chaine dadresse a return
 * @b: constante a copie
 * @n: n fois la constante
 * Description: nul
 * Return: adreses
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
