#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head pointer ot the list
 * @index: the location of the node
 * Return: the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int count = 0;

	temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && count < index)
	{
		temp = temp->next;

		count++;
	}
	if (count == index)
		return (temp);
	return (NULL);
}

