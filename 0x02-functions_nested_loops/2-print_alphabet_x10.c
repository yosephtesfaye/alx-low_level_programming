#include "main.h"
/**
 * print_alphabet_x10- print alphabet
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
