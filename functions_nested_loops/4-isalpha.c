#include "main.h"

/**
 * _isalpha - return if nimber or not
 * Description: affiche la phrase
 * Return: 0; succs
 */

int _isalpha(int c)
{
	if ((c > 64  && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
