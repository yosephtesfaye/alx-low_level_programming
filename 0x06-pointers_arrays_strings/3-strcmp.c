#include "main.h"
/**
 * strcmp - compare two string
 * @s1: destingation variable
 * @s2: source variable
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;

	while ( s1[length] != '\0' && s2[length] != '\0')
	{

	if (s1[length] < s2[length])
		return (s1[length] - s2[length]);
	else if (s1[length] > s2[length])
		return (s1[length] - s2[length]);
	else
		return (0);
	}
	return (1);
}


