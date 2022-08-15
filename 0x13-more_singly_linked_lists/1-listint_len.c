#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head poiner
 * Return: the number
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
