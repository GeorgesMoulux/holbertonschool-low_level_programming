#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - dup
 * @str: string
 * Description: nul
 * Return: buffer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size = strlen(str);
	char *buffer;

	if (str == NULL)
		return (NULL);

	buffer = malloc((size + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = str[i];

	buffer[i] = '\0';

	return (buffer);
}
