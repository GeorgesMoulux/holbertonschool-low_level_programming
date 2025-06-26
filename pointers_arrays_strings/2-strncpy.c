#include "main.h"

/**
 * _strncpy - cpy string with null bytes
 * @dest: dest
 * @src: src
 * @n: size of src
 * Description: nul
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
