#include "lists.h"

/**
 * sum_listint - finds the sum of all node elements
 * @head: pointer to elements
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
