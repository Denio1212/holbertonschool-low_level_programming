#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates a given string
 * @str: the one to be duped
 * Return: The duplicate
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
	{
		length++;
	}
	s = malloc(sizeof(char) * length);

	if (s == NULL)
		return (NULL);

	while ((s[i] = str[i]) != '\0')
	{
		i++;
	}
	return (s);
}



