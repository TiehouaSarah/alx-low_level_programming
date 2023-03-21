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

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
