#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - convert binary to uint
 * @n: first and unique parameter
 *
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
