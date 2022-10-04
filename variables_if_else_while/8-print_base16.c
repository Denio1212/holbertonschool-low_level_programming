#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar ('\n');

	return (0);
}
/**
 * The program prints out from 0-9 and then will print out the 6 other letters
 * to finish the base 16 quota.
 */
