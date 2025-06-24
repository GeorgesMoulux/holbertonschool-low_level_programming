#include "main.h"

void print_array(int *a, int n)
{
	int *p = 0;

	for (p = a; p < a + n; p++)
	{
    		printf("%d, ", *p);
	}
}
