#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * binary_to_uint - change binary to unsigned int
 * @b: char pointer
 * Return: unsined int or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ui;

int len, base_two = 1;
	if (b == NULL)
		return (0);

			ui = 0;
	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			ui += base_two;
		}
	}
	return (ui);
}
