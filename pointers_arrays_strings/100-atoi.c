#include "main.h"

/**
 * _atoi - ascii to intger
 * @s: string a transforme
 * Description: nul
 * Return: nul
 */

int _atoi(char *s)
{
	int i = 0;
	int m = 0; /*compteur de signe moins */
	int n = 0;

	if (s[0] == '\0')
		return (0);
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			m++;

		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10;
		n += s[i] - 48;
		i++;
	}
	if (!(s[i] >= '0' && s[i] <= '9'))
		return (0);
	if (m % 2 != 0)
		n = -n;
	return (n);
}
