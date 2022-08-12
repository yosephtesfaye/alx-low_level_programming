#include "lists.h"
#include <stdio.h>
/**
 * list_len - cont the elements of a list
 * @h: head of a list
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	 int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
