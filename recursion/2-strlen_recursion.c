#include "main.h"
/**
 * _strlen_recursion - fff
 * @s: string
 * Description: lol
 * Return: rec
 */
int _strlen_recursion(char *s)
{
	if  (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
