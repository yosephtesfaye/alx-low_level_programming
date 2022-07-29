#include"main.h"
#include<stdio.h>
/**
 * print_times_table - prints time table
 *@n: int size
 */
void print_times_table(int n)
{
	int i, j;

	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			_putchar(j * i +'0');
			if(j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
