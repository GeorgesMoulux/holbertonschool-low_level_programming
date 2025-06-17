#include "main.h"

/**
 * _islower - return 1 if lower , 0 if not
 * Description: affiche la phrase
 * c - char a test
 * Return: 0; succs
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
