#include "main.h"

/**
 * _isupper - if uppercase
 *
 * @c: letter
 * Description: a
 * Return: 0; succs
 */


int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
