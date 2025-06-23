#include "main.h"

/**
 * _isdigit - if digit
 *
 * @c: letter
 * Description: a
 * Return: 0; succs
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
