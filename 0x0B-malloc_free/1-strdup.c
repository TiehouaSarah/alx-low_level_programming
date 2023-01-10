#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Coping pointer of array
 * *str: first parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */
char *_strdup(char *str)
{
	char *myArray;
	unsigned int i = 0;

	myArray = malloc(sizeof(char) * sizeof(str));
	if (myArray == NULL)
	{
		return (NULL);
	}
	while (i < sizeof(str))
	{
		myArray[i] = str[i];
		i++;
	}

	return (myArray);

}
