#include "main.h"

/**
 * _strcpy - src into dest
 * @dest: pointeur sur le debut de la chaine de dest
 * @src: pointeur sur le debut de la chaine de src
 * Description: nul
 * Return: 0, ded
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
