#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - racine recursive
 * @n: n
 * Description: lol
 * Return: rec
 */

int _sqrt_help(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 0));
}

/**
 * _sqrt_help - racine recursive
 * @n: n
 * @i: i
 * Description: lol
 * Return: rec
 */

int _sqrt_help(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_help(n, i + 1));
}
