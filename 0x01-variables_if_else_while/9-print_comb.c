#include <stdio.h>
/*
 * main - prints numbers,followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 57; i++)
{
putchar(i);
putchar(',');
}
putchar('9');
putchar('\n');
return (0);
}
