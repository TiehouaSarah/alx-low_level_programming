#include <stdlib.h>
#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
