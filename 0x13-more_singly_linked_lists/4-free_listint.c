#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a linked list
 * @head: head pointer
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
