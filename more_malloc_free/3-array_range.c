#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - check
 * @min: number of bytes
 * @max: size of a bytes
 * Description: NUL
 * Return: NUL
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *buffer = NULL;

	if (min > max)
		return (NULL);
	buffer = malloc((max - min + 1) * sizeof(int));
	if (buffer == NULL)
		return (NULL);

	while (min <= max)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	return (buffer);
}
