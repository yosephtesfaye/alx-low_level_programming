#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - prints elements of a linked list
 *@h: header pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}

		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[%u] (nil)\n", h->len);
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			count++;
			h = h->next;
		}
	return (count);
}
