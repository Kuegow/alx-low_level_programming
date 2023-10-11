#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = (char *)name;
	d->age = (float)age;
	d->owner = (char *)owner;
}
