#include "lists.h"
/**
 * sum_listint - sum the data in the list
 * @head: head of the list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;

		temp = temp->next;
	}
	return (sum);
}
