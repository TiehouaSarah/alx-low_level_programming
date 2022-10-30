#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(' ,');
		}
		else
		{
			putchar('$');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
