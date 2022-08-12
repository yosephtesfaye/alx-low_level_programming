#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - add node at the beginning
 * @head: head o the list
 * @str: the sting to be inserted
 * Return: the address
 */
int len(const char *str);

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	newnode->str = strdup(str);

	newnode->len = len(str);

	newnode->next = NULL;

	if (head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;

		*head = newnode;
	}
	return (*head);
}
/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */
int len(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++);

	return (count);
}
