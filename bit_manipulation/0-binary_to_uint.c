#include "main.h"

/**
 * Return the length of a string()
 * @s: pointer to str
 * Return: Strlen
*/

unsigned int _strlen_b(const char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) != '0' && *(s + i) != '1')
			return (0);
		++i;
	}
	return (i);
}

/**
 * Converts a binary number to unsigned int
 * @b: Pointer to binary str
 * Return: Converted nr
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow;
	unsigned int n = 0;
	unsigned int l = 0;

	if (b)
		l = _strlen_b(b);
	for (pow = 0; l; --l, ++pow)
	{
		if (*(b + l - 1) == '1')
			n += 1 << pow;
	}
	return (n);
}
