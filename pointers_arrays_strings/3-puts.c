#include "main.h"

/**
 * _puts - put string
 * @str: string
 * Description: nul
 * Return: 0, ded
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
