#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	char allChar[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(allChar[i]);
	}
	return (0);
}
