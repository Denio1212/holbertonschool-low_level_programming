#include "main.h"
#include <stdlib.h>
/**
 * *create_array - makes an array and initializes it with a char
 * @size: the array size
 * @c: the char to initialize
 * Return: the pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
