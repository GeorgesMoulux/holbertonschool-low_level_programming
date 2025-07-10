#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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

	d->name = name;
	d->owner = owner;
	d->age = age;
}
