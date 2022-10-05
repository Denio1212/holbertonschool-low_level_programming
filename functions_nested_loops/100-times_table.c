#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int r, c, nr;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				nr = c * r;
				if (c == 0)
					_putchar(nr + 48);
				else if (nr < 10 && c != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(nr + 48);
					}
					else if (nr >= 10 && nr < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((nr / 10) + 48);
						_putchar((nr % 10) + 48);
					}
					else if (nr >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(((nr / 10) / 10) + 48);
						_putchar(((nr / 10) % 10) + 48);
						_putchar((nr % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}








