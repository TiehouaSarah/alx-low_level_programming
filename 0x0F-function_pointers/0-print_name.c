#include <stdio.h>

/**
 * print_name - is a pointer to function that prints name
 *
 * @name : name to print
 * @f : function to pointe
 *
 * Return : return void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
