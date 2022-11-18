#include "lists.h"
/**
 * _strlen - length
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 * add_node_end - ads a new node at the end
 * @head: the pointer to the nodes
 * @str: the string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;

	return (new);
}


