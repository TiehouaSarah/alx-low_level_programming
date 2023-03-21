#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - return concatenate string
 *
 * @dest : first parameter
 *
 * @src : second parameter
 *
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
