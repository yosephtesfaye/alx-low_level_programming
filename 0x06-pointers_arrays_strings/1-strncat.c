#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenate strings
 * @dest: destingation variable
 * @src: source variable
 * @n: size of src
 * Return: returns char value
 */
char *_strncat(char *dest, char *src, int n)
{
int length, j;

length = 0;

while (dest[length] != '\0')
{
length++;
}
j = 0;
while (j <= n)
{
dest[length] = src[j];
j++;
length++;
}
return (dest);
}
