#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenate strings
 * @dest: destingation variable
 * @src: source variable
 * Return: returns char value
 */
char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;

while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';

return (dest);
}
