#include "main.h"

/**
 *_islower - check the if param is lowercase
 *
 *@c: The character to be checked.
 *
 *Return:1 if lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
