#include "main.h"

/**
 * is_prime_number - nb premier
 * @n: n
 * Desription: lol
 * Return: rec
 */

int check_prime(int  n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}
/**
 * check_prime - nb premier
 * @n: n
 * @i: lol
 * Desription: lol
 * Return: rec
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
