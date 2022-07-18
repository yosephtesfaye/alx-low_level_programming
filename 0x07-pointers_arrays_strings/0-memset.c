#include "main.h"
/**
 * _memset - set the memory with comstant byte
 * @s: string
 * @b: char
 * @n: int size
 * Return: memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
