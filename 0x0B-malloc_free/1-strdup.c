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
	int size = strlen(str);
	char *ne;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ne = (char *)malloc(size + 1 * sizeof(char));
	for (i = 0; i <= size; i++)
	{
		ne[i] = str[i];
	}
	return (ne);
}
