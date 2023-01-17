#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes variables
 *
 * @d : struct dog
 * @name : first param
 * @age : second param
 * @owner : third param
 * Description: nothing to say
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
