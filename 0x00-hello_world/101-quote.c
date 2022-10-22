#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 *Return: Always 1 (Success)
 */


int main(void)
{
	char sd1[] = "and that piece of art is useful\"";
	char sd2[] = "- Dora Korpar, 2015-10-19\n";
	
	strcat(sd1, sd2);

	write(STDOUT_FILENO, sd1, 59);
	return (1);
}
