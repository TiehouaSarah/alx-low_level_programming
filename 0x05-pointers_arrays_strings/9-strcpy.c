#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copy address function
 *
 * @*dest : first pointeur
 *
 * @*src : second pointer
 *
 *Return: char 
 */

char *_strcpy(char *dest, char *src)
{
	*dest = *src;
	return (*dest);
}
