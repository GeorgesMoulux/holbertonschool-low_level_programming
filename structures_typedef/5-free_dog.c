#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - lll
 * @d: dff
 * Description: ded
 * Return: 00
 */

void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}