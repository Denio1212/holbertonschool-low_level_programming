#include "main.h"
/**
 * _puts_recursion - The puts command, with a twist of recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
