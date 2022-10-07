#include <stdio.h>
/**
 * main - prints out the first 50 fibonacci nr.
 * from 1 and 2
 * Return: 0 Success
 */

int main(void)
{
	unsigned long int i, j, l, nxt;

	j = 1;
	l = 2;

	for (i = 1; i < 51; ++i)
	{
		if (j == 135301852344706746049)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		nxt = j + l;
		j = l;
		l = nxt;
	}
	return (0);
}
