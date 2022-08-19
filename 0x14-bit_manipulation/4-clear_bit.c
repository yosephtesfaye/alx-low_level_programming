#include "main.h"
/**
 * clear_bit - set the bit value to 0
 * @n: number
 * @index: position
 * Return: 1 if success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);

		return (1);
	}
	return (-1);
}
