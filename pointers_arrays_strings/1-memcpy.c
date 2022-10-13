#include "main.h"
/**
 * _memcpy - copies memory bytes onto a string
 * @dest: the returning lad
 * @src: the string getting copied
 * @n: number of chars in said string
 * Return: the dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

