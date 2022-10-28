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
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] -= 32;
		a++;
	}
	return (p);
}
