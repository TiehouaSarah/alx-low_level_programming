#include "main.h"
#include <string.h>
/**
 * rev_string - printe char content in reverse
 *
 * @s : pointer of string to be pass and reverse
 *
 *Return: void
 */
void rev_string(char *s)
{
	int charSize = strlen(s) - 1;
	char d[];

	while (charSize >= 0)
	{
		d[charSize] = s[charSize];
		charSize--;
	}
	_putchar('\n');
}
