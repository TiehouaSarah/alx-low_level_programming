#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string followed by a new line
 *
 * @separator : first parameter
 * @n : second parameter
 * @... : rest of parameter
 *
 * Return: void value
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(ap, const char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("%s", "(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s ", separator);
	}

	va_end(ap);

	printf("\n");
}
