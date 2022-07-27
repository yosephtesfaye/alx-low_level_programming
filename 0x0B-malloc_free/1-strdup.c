#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *_strdup - return a new referese which get the duplicate
 * * of a given sting
 * @str: pointer reference
 * Retrun: characer refrernece or NULL
 */

char *_strdup(char *str)
{
	int size = sizeof(str);
	char *ne;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ne = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ne[i] = str[i];
	}
	return (ne);
}
