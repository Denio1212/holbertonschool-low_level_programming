#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to start of list
 * @n: data in list
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
	new->prev = current;
	current->next = new;
	}
	return (new);
}


