#include "main.h"

/**
 *print_sign - check the sign of a given number
 *
 *@n: The character to be checked.
 *
 *Return:1 if lowercase and 0 otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
