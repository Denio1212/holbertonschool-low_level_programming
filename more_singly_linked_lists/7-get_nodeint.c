#include "lists.h"
/**
 * get_nodeint_at_index - does what it says
 * @head: pointer to address of element
 * @index: what we're trying to find
 * Return: address of index of NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
