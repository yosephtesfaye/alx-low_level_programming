#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number
 * Retrun: int
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
