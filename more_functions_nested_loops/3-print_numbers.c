#include "main.h"
/**
 * print_numbers - prints the numbers 0 to 9 style
 * and a newline
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
