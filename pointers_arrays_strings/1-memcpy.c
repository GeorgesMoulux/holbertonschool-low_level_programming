#include "main.h"
/**
 * _memcpy - cpy une zone memoire
 * @dest: dest
 * @src: src
 * @n: n
 * Description: nul
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
