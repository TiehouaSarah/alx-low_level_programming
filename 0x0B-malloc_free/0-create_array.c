#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creating array of chars
 * @size: first parameter
 * @c: second parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;

	if (size == 0)
		return (NULL);

	myArray = malloc(sizeof(char) * size);
	if (myArray == NULL)
	{
		return (NULL);
	}
	myArray[0] = c;

	return (myArray);

}
