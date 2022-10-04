#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char o;

	o = 'a';

	while (o <= 'z')
	{
		_putchar(o);
		o++;
	}
	_putchar('\n');
}
