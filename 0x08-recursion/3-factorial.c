#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number
 * Return: factorial of n, or -1 if n < 0
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
