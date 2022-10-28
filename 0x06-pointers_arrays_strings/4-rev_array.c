#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * reverse_array - function reversing array data
 *
 * @a: pointer of receive array
 *
 * @n : size of table
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
