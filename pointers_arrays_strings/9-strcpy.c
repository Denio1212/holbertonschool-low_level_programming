#include "main.h"
/**
 * _strcpy - copies the given string in a new dest
 * @dest: the sestination of the copied string
 * @src: the input string
 * Return: prints the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int size, i;

	size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
