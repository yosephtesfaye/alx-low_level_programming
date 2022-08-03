#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - accept user input and call the pointer
 *  @argc: size of the arg
 *  @argv: list of  argunets
 *  Return: result or error
 */
int main(int argc, char *argv[])
{
	int R;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	R = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", R);
	return (0);
}
