#include <stdio.h>
/**
 *print_alphabet -output the 26 letters of alphabet
 *
 *Return: void
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
