#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @l: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int l)
{
	int m;

	if (l < 0)
		l = -l;

	m = l % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');
	return (m);
}

