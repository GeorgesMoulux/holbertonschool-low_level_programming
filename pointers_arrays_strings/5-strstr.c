#include "main.h"


char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (haystack[i])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			else 
				return (&haystack[i]);
		}
	i++;
	}
	return (0);
}
