#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - dup
 * @grid: string
 * @height: string
 * Description: nul
 * Return: buffer
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
