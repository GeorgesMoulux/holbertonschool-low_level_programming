#include "main.h"

/**
 * _strcmp - compare ascii
 * @s1: first string
 * @s2: second string
 * Description: cmp
 * Return: nul
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if  (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
