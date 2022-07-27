#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * *str_concat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, j, len2, i, length;

	char *conc;

	len1 = strlen(s1), len2 = strlen(s2), length = len1 + len2;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	else if (s1 != NULL && s2 == NULL)
	{
		conc = malloc((len1 + 1) * sizeof(char));
		for (i = 0; i < len1; i++)
		{
			conc[i] = s1[i];
		}
	}
	else if (s1 == NULL && s2 != NULL)
	{
		conc = malloc(len2 * sizeof(char));
		for (i = 0; i < len2; i++)
		{
			conc[i] = s2[i];
		}
	}
	else
	{
conc = malloc((length) * sizeof(char));
for (i = 0; i < len1; i++)
{
conc[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
conc[j + len1] = s2[j];
}
}
return (conc);
}
