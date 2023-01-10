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
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	myArray = malloc(sizeof(char) * size);
	if (myArray == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		myArray[i] = c;
		i++;
	}

	return (myArray);

}
