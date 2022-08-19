#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: unsigned long int
 * @index: location
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < 64; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
