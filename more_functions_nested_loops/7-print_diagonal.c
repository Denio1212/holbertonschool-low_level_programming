#include "main.h"
/**
 * print_diagonal - makes a diagonal line on the terminal
 * @n: number of times it should be printed
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int nl, sp;

		for (nl = 0; nl < n; nl++)
		{
			for (sp = 0; sp < n; sp++)
			{
				if (sp == nl)

					_putchar('\\');

				else if (nl > sp)

					_putchar(' ');
			}
				_putchar('\n');
		}
	}
}

