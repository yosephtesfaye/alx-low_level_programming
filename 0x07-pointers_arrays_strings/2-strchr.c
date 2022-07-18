#include "main.h"
/**
 * *_strchr - locate character
 * @s: string
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
