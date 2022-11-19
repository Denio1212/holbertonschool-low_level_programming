#include "lists.h"

/**
 * free_listint2 - frees an entire node
 * @head: pointers to the nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *replace;
	
	if (!head)
		return;

	while (*head)
	{
		replace = (*head)->next;
		free(*head);
		*head = replace;
	}
	*head = NULL;
}

