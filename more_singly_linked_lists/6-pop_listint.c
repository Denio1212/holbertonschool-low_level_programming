#include "lists.h"


int pop_listint(listint_t **head)
{
	listint_t *replace;
	int r = 0;

	if (*head)
	{
		r = (*head)->n;
		replace = (*head)->next;
		free(*head);
		*head = replace;
	}
	return (r);
}

