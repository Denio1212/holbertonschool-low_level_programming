#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds a substring of a string
 * @haystack: the string
 * @needle: the substring asked to be found
 * Return: either the address of the string if found
 * or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

