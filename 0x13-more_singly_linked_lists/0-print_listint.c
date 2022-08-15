#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of a list
 * @h: head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
