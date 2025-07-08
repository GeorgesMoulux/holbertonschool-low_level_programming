#include "main.h"
#include <stdlib.h>
/**
 * _calloc - check
 * @nmemb: number of bytes
 * @size: size of a bytes
 * Description: NUL
 * Return: NUL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		buffer[i] = 0;
	return (buffer);
}
