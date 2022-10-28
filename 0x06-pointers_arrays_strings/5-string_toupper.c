#include <string.h>
#include <ctype.h>

/**
 * string_toupper - function convert string to uppercase
 *
 * @p : pointer pass as param
 *
 *Return: pointer converted
 */

char *string_toupper(char *p)
{
	char *s = p;

	while (*s)
	{
		*s = toupper(*s);
		s++;
	}
	return (s);
}
