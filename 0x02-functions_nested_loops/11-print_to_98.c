#include <stdio.h>
/**
 *print_to_98 - print number from 0 to 98
 *
 * @n: The number to begin counting at.
 *Return:void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
