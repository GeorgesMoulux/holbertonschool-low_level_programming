#include "main.h"
/**
 * print_times_table - print les tables de n
 * @n: la table a afficher
 * Return: No return
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < (n + 1); i++)
			{
				for (j = 0; j < n + 1; j++)
				{
					printf("%d", i * j);
					if (j < n)
					printf(", ");
				}
				printf("\n");
			}
	}
}
