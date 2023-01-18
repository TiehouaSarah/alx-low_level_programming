#include <stdio.h>

/**
 * array_iterator - array iterator on another function
 *
 * @array : array
 * @size : array size
 * @action : action to do at each iterate
 *
 * Return : return void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
