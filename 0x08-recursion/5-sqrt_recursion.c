#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - returns natural square root of a number
* @n: number to be square rooted
*
* Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calculate(n, 0));
}
/**
* calculate - function to find sqrt
* @num: num to be square rooted
* @guess: guess number
*
* Return: squareroot of number
*/
int calculate(int num, int guess)
{
	if (guess * guess == num)
		return (guess);

	if (guess * guess > num)
		return (-1);
	else
		return (calculate(num, guess + 1));
}
