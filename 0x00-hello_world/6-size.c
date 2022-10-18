#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	long long int trefl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(trefl));
	return (0);
}
