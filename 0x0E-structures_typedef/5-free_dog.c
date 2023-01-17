#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog
 *
 * @d : first param
 * Description: nothing to say
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
