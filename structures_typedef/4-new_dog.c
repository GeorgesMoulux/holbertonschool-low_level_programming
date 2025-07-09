#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d2 = malloc(sizeof(dog_t))
	if (d2 == NULL)
		return (NULL);
	d2->name = strdup(name);
	d2->age = age;
	d2->owner = strdup(owner);

	if (d2->name== NULL || d2->owner == NULL)
		{
			free(d2->name);
			free(d2->owner);
			free(d2);
		}
		return (d2);
}
