#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at agiven position
 * @head: head pointer
 * @idx: the position to insert
 * @n: the value to be inseted
 * Return: the pointer of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;

	unsigned int count = 0;


	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;

	new->next = NULL;


	if (head == NULL)
		*head = new;
	while (temp != NULL && idx < count)
	{
		count++;

		temp = temp->next;
	}
	if (idx == count)
	{
		new->next = temp->next;

		temp->next = new;
		return (temp);
	}
	return (NULL);
}
