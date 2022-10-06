#include "main.h"
/**
 * print_triangle - prints the triangle followed up by a  new line
 * @size: puts all the nooks and cranies in one place
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int nl, ht;

		for (nl = 1; nl <= size; nl++)
		{
			for (ht = nl; ht < size; ht++)
			{
				_putchar(' ');
			}
			for (ht = 1; ht <= nl; ht++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

