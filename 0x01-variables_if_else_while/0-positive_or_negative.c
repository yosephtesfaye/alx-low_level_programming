#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("is positive");
}
else
if (n == 0)
{
	printf("is zero");
}
else
{
	printf("is negative");
}
return (0);

}
