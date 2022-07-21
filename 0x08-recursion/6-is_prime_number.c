#include "main.h"
/**
 * is_prime_number - check a number is prime or not
 * @n: int number
 * Return: int value 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0)
		return (0);
	else
	{
	is_prime(n, i + 1);
	return (1);
	}
}


