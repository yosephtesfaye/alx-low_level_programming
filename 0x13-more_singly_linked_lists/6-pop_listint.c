#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - removes head of a list and  retrun ita value
 * @head: head pointer
 * Return: resturns the data or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}

