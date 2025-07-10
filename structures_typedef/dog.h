#include <stdio.h>
#include <string.h>
#ifndef DOG_H
#define DOG_H

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

dog_t *new_dog(char *name, float age, char *owner);

#endif
