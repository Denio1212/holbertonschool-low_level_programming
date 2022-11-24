#include "lists.h"

/**
 * get_nodeint_at_index - finds the n-th node in a list
 * @index: the given index
 * Return: NULL if no found node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	current = head;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
