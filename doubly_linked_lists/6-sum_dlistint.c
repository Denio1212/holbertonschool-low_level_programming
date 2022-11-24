#include "lists.h"

/**
 * sum_dlistint - finds sum of all nodes
 * @head: ptr to the start of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}


