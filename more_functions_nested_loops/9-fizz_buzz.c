#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * and for both FizzBuz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 3 == 0 && o % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (o % 3 != 0 && o % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (o % 3 == 0 && o % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (o == 1)
		{
			printf("%d", o);
		}
		else
		{
			printf(" %d", o);
		}
	}
	printf("\n");
	return (0);
}

