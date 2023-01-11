#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Coping pointer of array
 *
 * @str: first parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */
char *_strdup(char *str)
{
	char *myArray;
	unsigned int i, lena;

	i = 0;
	lena = 0;

	if (str == NULL)
		return (NULL);

	while (str)
	{
		if (str[lena])
		{
			lena++;
		} else
		{
			break;
		}
	}

	myArray = malloc(sizeof(char) * (lena + 1));
	if (myArray == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		myArray[i] = str[i];
		i++;
	}

	return (myArray);

}
