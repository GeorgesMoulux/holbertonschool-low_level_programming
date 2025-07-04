#include "main.h"

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;
	
	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - i - 1)];
	}
		printf("%d, ", (diag1));
		printf("%d", (diag2));
		printf("\n");
}

