#include "main.h"

/**
 * _strncat - n char de src
 * @dest: dest
 * @src: src
 * @n: nb de src
 * Description: nul
 * Return: nul
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
