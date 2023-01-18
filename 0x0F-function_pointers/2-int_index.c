#include <stdio.h>

/**
 * int_index - array iterator on another function
 *
 * @array : array
 * @size : array size
 * @cmp : action to do at each iterate
 *
 * Return: not 0 but -1 or another thing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
