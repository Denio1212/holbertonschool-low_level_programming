#include "main.h"
/**
 * _strncat - links 2 strings at the byte number n specified
 * @dest: The finished string
 * @src: The source string
 * @n: the byte count
 * Return: prints out the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')

		i++;

	while (src[j] !=  '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

