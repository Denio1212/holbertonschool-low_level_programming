#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{

	int n, d;

	for (n = 0; n < 10; n++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d >= 10)

			_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}





