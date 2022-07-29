#include"main.h"
#include<stdio.h>
/**
 * print_times_table - prints time table
 *@n: int size
 */
void print_times_table(int n)
{
	int i, j, product;

	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if(product >= 100 && j != 0)
			{
				_putchar((product / 100) + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
		}
	}

