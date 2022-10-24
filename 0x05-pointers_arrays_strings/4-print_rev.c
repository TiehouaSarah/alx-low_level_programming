#include "main.h"
#include <string.h>
/**
 * print_rev - printe char content in reverse
 *
 * @s : pointer of string to be pass and reverse
 *
 *Return: void
 */
void print_rev(char *s)
{
	int charSize = strlen(s) - 1;

	while (charSize >= 0)
	{
		_putchar(s[charSize]);
		charSize--;
	}
	_putchar('\n');
}
