#include "main.h"
/**
 * _print_rev_recursion - racine recursive
 * @s: string
 * Description: lol
 * Return: rec
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
