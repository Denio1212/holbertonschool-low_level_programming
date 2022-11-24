#include "lists.h"

/**
 * free_dlistint_t - frees a list
 * @head: pointer to start
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		free(current);
		head = head->next;
	}
}

