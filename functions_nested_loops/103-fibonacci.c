#include <stdio.h>
/**
 * finds and prints the sum of even valued
 * numbers followed by new line
 * Return: 0 Success
 */


int main(void)
{
	int i;
	long int j, k, nxt, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		nxt = j + k;
		j = k;
		k = nxt;
	}
	printf("%ld\n", sum);
	return (0);
}

