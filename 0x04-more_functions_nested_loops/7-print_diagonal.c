#include "main.h"

/**
 *print_diagonal - print diagonal line
 *
 *@n: number of diagonal should be print
 *
 *Return: diagonal
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
