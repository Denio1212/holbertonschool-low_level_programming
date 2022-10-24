#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Merges 2 strings into 1
 * @s1: string one
 * @s2: string two
 * Return: The merged string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 2));

	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len2 + len1))
		{
			s3[i] = s2[j];
			j++;
			i++;
		}
	}
	return (s3);
}
