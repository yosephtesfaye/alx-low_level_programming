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
/**
 * is_prime - return if a number is prime or not
 * @n: takes a number
 * @i: takes a  number
 * Return : it will return 0 if not prime otherwise 1
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0)
		return (0);
	is_prime(n, i + 1);
	return (1);
}


