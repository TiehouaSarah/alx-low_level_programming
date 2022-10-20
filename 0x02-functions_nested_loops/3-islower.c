#include "main.h"

/**
 *_islower - check the if param is lowercase
 *
 *Return:1 if lowercase and 0 otherwise
 *
 *'c' - is the character that function receive
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
