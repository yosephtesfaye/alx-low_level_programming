#include<stdio.h>
/**
 * main - prints characters  in reverse order followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
