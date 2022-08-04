#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers with separator
 * @separator: separator
 * @n: size
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		exit(0);

	for (i = 0; i < n; i++)
	{
		int k = va_arg(args, int);

		printf("%d", k);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
