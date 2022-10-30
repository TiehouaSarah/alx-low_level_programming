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
	char i = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
