#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that gives string length
 *
 * @str : character to give length
 *
 *Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
