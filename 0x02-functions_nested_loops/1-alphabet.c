#include <stdio.h>
/**
 *print_alphabet -output the 26 letters of alphabet
 *
 *Return: void
 *
 */

void print_alphabet(void)
{
	char allChar[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', '0', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};

	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(allChar[i]);
	}
}
