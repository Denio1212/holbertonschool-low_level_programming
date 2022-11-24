#include "lists.h"
/**
 * dlist_size - finds size of a list
 * @h: ptr to first node
 * Return: number of nodes
 */
unsigned int dlist_size(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n = 0;

	current = h;

	while (current)
	{
		current = current->next;
		n++;
	}
	return (n);
}



/**
 * delete_dnodeint_at_index - deletes a node
 * at specified space
 * @head: the pointer to the start of list
 * @index: index given
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 1;

	if (!*head || index > dlist_size(*head))
		return (-1);
	current = *head;
	tmp = *head;
	while (i < index)
	{
		if (!tmp)
			return (-1);
		i++;
		tmp = tmp->next;
	}
	if (index)
	{
		current = tmp->next;
		tmp->next = current->next;
		if (tmp->next)
		{
			tmp = tmp->next;
			tmp->prev = current->prev;
		}
	}
	else
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}

	}
	free(current);
	return (1);
}
