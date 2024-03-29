#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all functions argument
 *
 * @n : first parameter
 * @... : rest of parameter
 *
 * Return: int value
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);

}
