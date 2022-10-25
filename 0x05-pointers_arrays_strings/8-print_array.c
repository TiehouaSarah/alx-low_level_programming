#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - print array content
 *
 * @a : first parameter pointer of the array
 *
 * @n: second parameter size of array
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf("%d, ", a[n]);
	}
}
