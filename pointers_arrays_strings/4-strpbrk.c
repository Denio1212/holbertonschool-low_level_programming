#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for an inputed string
 * @s: the string searched
 * @accept: the chars we are searching for
 * Return: s if there are any chars, NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
