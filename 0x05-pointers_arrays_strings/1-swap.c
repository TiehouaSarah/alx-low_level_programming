#include "main.h"

/**
 *swap_int - swap two exterior values thourgh pointers
 *
 * @a : first parameter
 * @b : second parameter
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int some = *a;
	*a = *b;
	*b = some;
}
