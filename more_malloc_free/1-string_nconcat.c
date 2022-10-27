#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concaternates 2 strings together
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a concaternated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 0, len2 = 0;

	while (s1 && s1[len])
		len++;

	while (s2 && s2[len2]) /* Incrementations for both strings */
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len + n + 1));

	else
		s = malloc(sizeof(char) * (len + len2 + 1));

	if (!s) /* This means, if s doesnt work, return NULL */
	{
		return (NULL);
	}
	while (i < len)  /* Fixing the first string into the convergent one  */
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len + n))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len + len2)) /* This converges both */
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
