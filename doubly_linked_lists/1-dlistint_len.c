#include "lists.h"
/**
 * dlistint_len - returns elements in a list
 * @h: pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;

	while (current)
	{
		current = current->next;
		n++;
	}
	return (n);
}
