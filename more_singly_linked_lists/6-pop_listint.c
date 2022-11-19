#include "lists.h"

/**
 * pop_listint - frees the first node of a list
 * Return: Data
 */
int pop_listint(listint_t **head)
{
	listint_t *replace;
	int n = 0;

	if (*head)
	{
		n = (*head)->n;
		replace = (*head)->next;
		free(*head);
		*head = replace;
	}
	return (n);
}

