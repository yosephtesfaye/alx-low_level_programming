#include "main.h"
#include <string.h>
/**
 *  *_strncpy - concatenate strings
 *  @dest: destingation variable
 *  @src: source variable
 *  @n: size of src
 *  Return: returns char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
	dest[length] = src[length];
	for (; length < n; length++)
{
	dest[length] = '\0';
}
return (dest);
}
