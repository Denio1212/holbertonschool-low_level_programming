#include "lists.h"

/**
 * _strlen - counts the string
 * @s: string
 * Return: The length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * *add_node - creates a new node
 * @head: the pointer to nodes
 * @str: the string
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
