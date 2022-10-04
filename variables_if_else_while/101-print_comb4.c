#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * exluding repeated ones
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				if (a != 55 || b != 56)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
/**
 * The a variable starts at 0 and finishes at 9
 * the variable b starts from 1 and finishes at 9
 * the variable c starts from 2 and finishes at 9
 * this prevents the same type of number like 012 or 210 or 201
 * the a and b digits are never allowed to be over 4 and 7 more than once
 * this makes the combinations be as small as possible but also including all
 * numbers
 */

