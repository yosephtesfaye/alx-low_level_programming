#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints reverse of a  string
 *
 * @str: string parameter
 * Return: no retrun
 */
void print_rev(char *str)
{
	int len = 0;

	int last;

	while (str[len] != '\0')
	{
		len++;
	}
	for (last = len - 1; last >= 0; last--)
	{
		_putchar(str[last]);
	}
	_putchar('\n');
}
