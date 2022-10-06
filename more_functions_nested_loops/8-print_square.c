#include "main.h"
/**
 * print_square - prints the square, fllowed by new line
 * @size: the size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int nl, sq;

		for (nl = 0; nl < size; nl++)
		{
			for (sq = 0; sq < size; sq++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
