#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check
 * @b: number of bytes
 * Description: NUL
 * Return: NUL
 */

void *malloc_checked(unsigned int b)
{
	char *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
		exit(98);
	return (buffer);
}
