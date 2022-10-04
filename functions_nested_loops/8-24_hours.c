#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int b, c;

	b = 0;

	while (b < 24)
	{
		c = 0;
		while (c < 60)
		{
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar(':');
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
			_putchar('\n');
			c++;
		}
		b++;
	}
}



