#include "lists.h"

/**
 * free_listint - frees a node
 * @head: the pointer to node
 */
void free_listint(listint_t *head)
{
	listint_t *replace;

	while (head)
	{
		replace = head->next;
		free(head);
		head = replace;
	}
}
