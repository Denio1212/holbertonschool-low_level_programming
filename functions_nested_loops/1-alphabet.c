#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
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
