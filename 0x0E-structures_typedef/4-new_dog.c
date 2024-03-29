#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 *
 * @name : first param
 * @age : second param
 * @owner : third param
 * Description: nothing to say
 *
 * Return: NULL or POINTER to dog created nemly
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
