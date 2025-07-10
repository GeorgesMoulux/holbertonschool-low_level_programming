#include <stdio.h>
#include "dog.h"
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
 * init_dog - initialise dog
 * @d: acceder a la struct
 * @name: ddd
 * @age: age
 * @owner: dldl
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = _strdup(name);
	d->owner = _strdup(owner);
	if (d->name == NULL || d->owner == NULL)
	{
		// Libérer si l’un a réussi mais pas l’autre
		free(d->name);
		free(d->owner);
		d->name = NULL;
		d->owner = NULL;
		return;
	}
	d->age = age;
}
