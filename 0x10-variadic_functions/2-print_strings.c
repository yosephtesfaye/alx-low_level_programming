#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings with separator
 * @separator: separator
 * @n: size
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	printf("(nil)");

	for (i = 0; i < n; i++)
	{
		char *k = va_arg(args, char *);

		printf("%s", k);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
