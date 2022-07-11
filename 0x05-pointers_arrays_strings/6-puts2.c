#include "main.h"
/**
 * puts2 - every othe string
 * @str: sring parameter
 * Return: no return
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
