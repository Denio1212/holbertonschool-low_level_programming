#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
*/

int main(void)
{
	int r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');

	return (0);
}
