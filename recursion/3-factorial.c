#include "main.h"
/**
 * factorial - factorial
 * @n: n
 * Description: lol
 * Return: rec
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
