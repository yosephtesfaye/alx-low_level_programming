#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end
 * @head: head of the list
 * @n: the numbers to be added
 * Return: return head of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *temp = *head;

	new = (listint_t *)malloc(sizeof(listint_t));

	new->n = n;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
