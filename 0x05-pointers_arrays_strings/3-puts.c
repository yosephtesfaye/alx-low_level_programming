#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string\
 *
 * @str: string parameter
 * Return: no retrun
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
