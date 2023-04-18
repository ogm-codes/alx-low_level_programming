#include "dog.h"
/**
 * init_dog - initializes a vairiable of type struct dog
 * @d - struct
 * @name - name from d
 * @age - age from d
 * @owner - owner from d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d-owner = owner;
	}
}
