#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number
 * Retrun: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
