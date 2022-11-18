#include "lists.h"

/**
 * free_list - frees a node
 * @head: the pointer to node
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
