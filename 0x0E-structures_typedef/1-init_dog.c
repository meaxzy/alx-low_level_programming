#include "dog.h"


/**
 * init_dog - the new struct dog to be initialize
 * @d: dog function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
