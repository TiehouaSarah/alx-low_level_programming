#include "main.h"
#include <string.h>
#include <stdlib.h>
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
	char *dico = NULL;

	while (charSize >= 0)
	{
		dico[charSize] = s[charSize];
		charSize--;
	}
	_putchar('\n');
}
