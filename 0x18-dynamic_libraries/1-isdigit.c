#include "main.h"

/**
 *_isdigit - check the if param is upperCase
 *
 *@c: The character to be checked.
 *
 *Return:1 if uppercase and 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
