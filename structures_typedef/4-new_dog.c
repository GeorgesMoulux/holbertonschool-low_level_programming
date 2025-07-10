#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - taille string
 * @s: pointeur
 * Description: nul
 * Return: 0, ded
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}

/**
 * _strdup - dup
 * @str: string
 * Description: nul
 * Return: buffer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size = _strlen(str);
	char *buffer;

	if (str == NULL)
		return (NULL);

	buffer = malloc((size + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = str[i];

	buffer[i] = '\0';

	return (buffer);
}

/**
 * new_dog - lll
 * @name: dff
 * @age: ff
 * @owner: ff
 * Description: ded
 * Return: 00
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d2 = malloc(sizeof(dog_t));

	if (d2 == NULL)
		return (NULL);
	d2->name = _strdup(name);
	d2->age = age;
	d2->owner = _strdup(owner);

	if (d2->name == NULL ||
		d2->owner == NULL)
	{
		free(d2->name);
		free(d2->owner);
		free(d2);
		return (NULL);
	}
	return (d2);
}
