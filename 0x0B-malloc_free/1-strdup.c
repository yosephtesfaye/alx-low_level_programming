#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * *_strdup - return a new referese which get the duplicate
 * * of a given sting
 * @str: pointer reference
 * Return: characer refrernece or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j;

	char *new;

	i = 0;

	j = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
		i++;

	new = (char *)malloc((i + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		new[j] = str[j];
		j++;
	}
	new[j] = '\0';

	return (new);
}
