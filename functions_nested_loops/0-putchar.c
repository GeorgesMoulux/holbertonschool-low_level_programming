#include <stdio.h>
#include <unistd.h>

/**
 * main - return void
 * Description: print putchar
 * Return: 0; succs
 */
void  putstring(char *str)
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
}
