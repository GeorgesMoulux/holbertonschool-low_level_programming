#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - dup
 * @s1: string
 * @s2: string
 * Description: nul
 * Return: buffer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height *sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		{	array[i] = malloc (width * sizeof(int));
			if (array[i] == NULL)
				return (NULL);

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		return (array);
}
