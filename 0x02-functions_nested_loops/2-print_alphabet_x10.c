#include <stdio.h>
/**
 *print_alphabet_x10 -output the 26 letters of alphabet 10 times
 *
 *Return: void
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');

		i++;
	}
}
