#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum variable length of argument
 * @n: number of arguments
 * Retrun: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int k = va_arg(args, int);

		sum += k;
	}
	va_end(args);
	return (sum);
}
