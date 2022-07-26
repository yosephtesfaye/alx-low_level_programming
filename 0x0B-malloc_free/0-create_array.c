#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create an array of char and
 * initializes it with specific char.
 * @size: int size
 * @c: character
 * Return: char or NULL if size 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(size * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	ch[i] = '\0';
	return (ch);
}
