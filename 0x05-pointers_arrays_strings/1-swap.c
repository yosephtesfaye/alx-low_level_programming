#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: takes the first number
 * @b: takes the second numer reference
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
