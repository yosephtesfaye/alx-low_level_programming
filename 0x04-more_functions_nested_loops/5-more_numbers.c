#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */
int main(void)
{
	int i,j;

	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
