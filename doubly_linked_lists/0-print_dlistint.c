#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: the header pointer of the list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}

