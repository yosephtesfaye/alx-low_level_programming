#include<stdio.h>
#include<stdlib.h>
/**
 * main - add positive numbers
 * @argc: size of the arg
 * @argv: argument list
 * Return: return sum or 0 if not a number otherwise 1
 */

int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	(void)argc;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*(argv[i]) >= 48 &&  *(argv[i]) <= 58)
			{
				sum += atoi(argv[i]);
			}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
		}
	printf("%d\n", sum);
	}
	return (0);
}
