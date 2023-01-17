#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog structure
 *
 * @d : struct dog
 * Description: nothing to say
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}