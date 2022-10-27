#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory space
 * @b: the umber of bytes
 * Return: The number allocated
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

