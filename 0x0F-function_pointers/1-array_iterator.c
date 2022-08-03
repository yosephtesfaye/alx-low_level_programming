#include "function_pointers.h"
/**
 * array_iterator - prints elements of an array iteratively
 * @size: size of array
 * @array: array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
