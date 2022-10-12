#include "main.h"
/**
 * _strcmp - compares two strings together
 * @s1: the first string compared
 * @s2: the second one
 * Return: 0 if s1 is null byte, si - s2 if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

