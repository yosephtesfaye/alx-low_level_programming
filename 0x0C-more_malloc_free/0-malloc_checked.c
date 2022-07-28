#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *malloc_checked - allocates memeory using malloc
 * @b: size
 */
void *malloc_checked(unsigned int b)
{
	char  *str;

	str = malloc(b);

	if (str != NULL)
	{
		return (str);
	}
	else
	{
		exit(98);
	}
	return (0);
}
