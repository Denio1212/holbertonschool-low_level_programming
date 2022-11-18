#include "lists.h"
/**
 * list_len - gives the length of a list
 * @h: the pointer to the next node
 * Return: how many nodes there are
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
