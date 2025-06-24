#include "main.h"
/**
 * puts2 - put string every other
 * @str: string
 * Description: nul
 * Return: 0, ded
 */

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			write(1,&str[i], 1);
	i++;
	}
	_putchar('\n');
}
