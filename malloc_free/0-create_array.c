#include "main.h"
#include <stdlib.h>

/**
 * create_array - create dynamic aarray
 * @size: size of array
 * @c: char
 * Description: nul
 * Return: buffer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
