#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b : unique parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	unsigned int  *memoryToReturn;

	memoryToReturn = malloc(b);
	if (memoryToReturn == NULL)
	{
		return (NULL);
	}
	return (memoryToReturn);

}
