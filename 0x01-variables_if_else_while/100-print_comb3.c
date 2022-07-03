#include<stdio.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
int a, b;
for (a = 0; a < 9; a++)
{
for (b = a + 1; b < 10; b++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a == 8 && b == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
