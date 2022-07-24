 #include <stdio.h>
/**
 * main - prints all arguments including first one
 * @argc: takes the size
 * @argv: takes the argumrnt
 * Return: returns 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
