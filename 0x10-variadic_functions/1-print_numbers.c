#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers followed by a new line
 *
 * @separator : first parameter
 * @n : second parameter
 * @... : rest of parameter
 *
 * Return: void value
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < (n - 1))
			printf("%s ", separator);
	}

	printf("\n");
	va_end(ap);
}
