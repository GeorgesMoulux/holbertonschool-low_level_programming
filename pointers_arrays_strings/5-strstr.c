#include "main.h"

/**
 * _strstr - find chain
 * @haystack: str to look in
 * @needle: str to fin
 * Description: nul
 * Return: adresse de premeier occurence de needle
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[j] == '\0')
		return (0);
	while (haystack[i])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
			if (needle[j] == '\0')
				return (&haystack[i]);
	i++;
	}
	return (0);
}
