#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result = 0;
	int j = 0;
	int i = 0;

	if (argc < 3)
		{
			printf("0\n");
			return (1);
		}

	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
				else
				return (printf("Error\n"));
			}

		result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
