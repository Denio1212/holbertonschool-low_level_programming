#include "main.h"
#include "stdio.h"
/**
 * _strchr - finds a specific char in a string an prints the rest
 * @s: the string inputted
 * @c: the char specified
 * Return: a pointer to the first occurence of a char
 */



char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
		return (NULL);
		}
	}
}

