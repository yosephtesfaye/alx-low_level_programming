#include "main.h"
/**
 * print_most_numbers - prints the number form  0 to 9
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
			_putchar('\n');
	}
}
