#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creating array of chars
 * @size: first parameter
 * @c: second parameter
 *
 * Return NULL if size = 0 / a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;

	if (size == 0)
		return (NULL);

	myArray = malloc(sizeof(c) * size);
	if (myArray == NULL)
	{
		return (NULL);
	}

	return (myArray);

}
