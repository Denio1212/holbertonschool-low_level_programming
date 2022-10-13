#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: the string being filled
 * Return: prints the filled up string
 * @b: the byte that fills the memory
 * @n: number of chars in the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
