#include "lists.h"
/**
 * _strlen - finds length of a str
 * @s: the string
 * Return: the length
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
