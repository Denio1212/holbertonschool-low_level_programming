#include "main.h"
/**
 * print_rev - prints the selected string in reverse
 * @s: The string
 */

void print_rev(char *s)
{
	int i, j, count;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	count = i;

	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
