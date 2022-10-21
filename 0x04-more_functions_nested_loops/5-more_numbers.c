#include "main.h"

/**
 *more_numbers - check the if param is upperCase
 *
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}

		_putchar('\n');
		j++;
	}
}
