#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main- return void
 * Description: lol
 * Return: 0 succs
 */

/*void  putstring(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char *str = "_putchar\n";

	putstring(str);
	return (0);
}*/

int main()
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
