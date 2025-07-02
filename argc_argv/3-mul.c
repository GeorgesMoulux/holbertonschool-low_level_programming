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

	if (argc > 2)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	if (argc < 3)
		printf("Error");
	return (0);
}
