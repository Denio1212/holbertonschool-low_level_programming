#include "lists.h"
/**
 * print_list - a fnction that prints all elements
 * @h: header to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

