#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (char *)name;
	d->age = age;
	d->owner = (char *)owner;
}
