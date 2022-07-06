#include <stdio.h>
#include "main.h"
/**
 * main-Entry point.
 * Description: write a function that prints the alphabet,
 * in lowercase, followed by a new line
 * Return: Always 0 (Success.)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');

	return 0;
}
