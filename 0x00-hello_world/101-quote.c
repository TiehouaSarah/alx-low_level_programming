#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 *Return: Always 1 (Success)
 */


int main(void)
{
	char sd1[38] = "and that piece of art is useful\"";
	char sd2[30] = "- Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, strcat(sd1, sd2), 59);
	return (1);
}
