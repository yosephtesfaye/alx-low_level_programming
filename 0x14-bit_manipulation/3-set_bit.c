#include "main.h"
/**
 * set_bit - set the given index bit to 1
 * @n: the number
 * @index: the position
 * Return: 1 if success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);

		return (1);
	}
	return (-1);
}
