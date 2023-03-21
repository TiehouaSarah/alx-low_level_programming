#include "main.h"
#include <string.h>
/**
 * _puts - printe char content
 *
 * @str : pointer of string to be pass
 *
 *Return: void
 */
void _puts(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
}
