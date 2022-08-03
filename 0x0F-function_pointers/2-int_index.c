#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array input
 * @size: size of the array
 * @cmp: pointer
 * Retrun: returns index of the firat element otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
