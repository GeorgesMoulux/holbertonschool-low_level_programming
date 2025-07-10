
#ifndef DOG_H
#define DOG_H

#include <stdio.h>


/**
 * struct dog - lll
 * @name: dff
 * @age: ff
 * @owner: ff
 * Description: ded
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
