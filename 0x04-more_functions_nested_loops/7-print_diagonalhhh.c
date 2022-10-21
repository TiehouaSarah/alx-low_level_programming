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

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		n--;
		while (a > 0)
		{
			_putchar(' ');
		}
		a++;
	}
}
