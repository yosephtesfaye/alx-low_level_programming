#include "main.h"
#include <stdio.h>
/**
 * reverse_array - returns reverse of array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int temp, length;

	n = n - 1;

	length = 0;

	while (length <= n)
	{
		temp = a[length];

		a[length++] = a[n];

		a[n--] = temp;
	}
}
