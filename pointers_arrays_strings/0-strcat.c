#include "main.h"
/**
 * _strcat - links two strings together
 * @dest: The destination string
 * @src: the string being changed
 * Return: Returns the src dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
