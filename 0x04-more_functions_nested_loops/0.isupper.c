#include "main.h"

/**
 *_isupper - check the if param is upperCase
 *
 *@c: The character to be checked.
 *
 *Return:1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
