#include "main.h"

/**
 * string_toupper - low to up
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

