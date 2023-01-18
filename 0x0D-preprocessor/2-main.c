#include <stdio.h>

/**
 * main - check the code
 *
 * @argc : first parameter
 * @argv : second parameter
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
#ifndef FILENAME
#define FILENAME argv[0]
#endif
	printf("%s\n", FILENAME);
	(void)argc;

	return (0);
}
