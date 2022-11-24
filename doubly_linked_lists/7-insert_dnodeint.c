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
 * insert_dnodeint_at_index - inserts a new node
 * at specified space
 * @h: the pointer to the start of list
 * @n: data
 * @idx: index given
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 0;

	current = *h;
	if ((!current && idx) || idx > dlist_size(*h))
		return (NULL);
	while (i < idx)
	{
		if (!current)
			return (NULL);
		i++;
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx)
	{
		new->prev = current;
		new->next = current->next;
		current->next = new;
		if (new->next)
		{
			current = new->next;
			current->prev = new;
		}
	}
	else
	{
		new->prev = NULL;
		new->next = current;
		if (new->next)
		{
			current->prev = new;
		}
		*h = new;
	}
	new->n = n;
	return (new);
}

