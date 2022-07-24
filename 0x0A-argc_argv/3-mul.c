#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: size of the argument
 * @argv: argument valud
 * Return: multiplication result
 */
int main(int argc, char *argv[])
{

	(void)argc;

	if (argc != 3)
		printf("%d\n", -1);
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
