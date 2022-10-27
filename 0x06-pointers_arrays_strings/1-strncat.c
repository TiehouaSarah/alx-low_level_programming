#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - return concatenate string
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
	strncat(dest, src, n);
	return (dest);
}
