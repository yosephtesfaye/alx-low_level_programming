#include<stdio.h>
/**
 * main - prints numbers,followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
