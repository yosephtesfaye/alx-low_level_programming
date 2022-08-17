#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverse the list
 * @head: head pointer
 * Return: the reversed head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *next = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = next;
	}
	*head = prev;

	return (*head);
}
