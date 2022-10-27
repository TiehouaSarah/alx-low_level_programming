#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - return concatenate string
 *
 * @dest : first parameter
 *
 * @src : second parameter
 *
 * @n : number of character we have to copy from oder
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	if ((size_t)n <= strlen(src))
	{
		int i = 0;
		char dd[] = {'\0'};

		while (i < n)
		{
			dd[i] = src[i];
			i++;
		}
		strcat(dest, dd);
	}
	return (dest);
}
