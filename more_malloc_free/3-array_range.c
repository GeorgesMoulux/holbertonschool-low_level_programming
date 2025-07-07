#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check
 * @nmemb: number of bytes
 * @size: size of a bytes
 * Description: NUL
 * Return: NUL
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *buffer = NULL;

	if (min > max)
		return (NULL);
	buffer = malloc((max - min) * sizeof(int));
	if (buffer == NULL)
		return (NULL);

	while (i < max + 1)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	return (buffer);
}
