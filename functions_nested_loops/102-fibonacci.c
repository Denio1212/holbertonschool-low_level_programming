#include <stdio.h>
/**
 * main - prints out the first 50 fibonacci nr.
 * from 1 and 2
 * Return: 0 Success
 */

int main(void)
{
	long int i, j, l, nxt;

	j = 1;
	l = 2;

	for (i = 1; i <51; ++i)
	{
		if (j == 20365011074)
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



