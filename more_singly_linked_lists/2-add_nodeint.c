#include "lists.h"


/**
 * add_nodeint - makes a node at the beginning
 * @head: get head
 * @n: number
 * Return: head after use
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
