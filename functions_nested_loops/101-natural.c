#include <stdio.h>
/** 
 * main - computes the sum of all numbers
 * that are multiples of 3 and 5
 * Return: 0 success
 */


int main(void)
{
	unsigned long int s3, s5, sum;
	int i;

	s3 = 0;
	s5 = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{	
		if ((i % 3) == 0)
			{
			s3 = s3 + i;
			}
		else if ((i % 5) == 0)
		{
			s5 = s5 + i;
		}
	}
	sum = s3 + s5;
	printf("%lu\n", sum);
	return (0);
}
