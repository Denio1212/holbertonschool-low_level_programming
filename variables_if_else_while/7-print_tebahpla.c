#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
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
/**
 * Instead of raising r++ i lowered the value of it by using
 * r-- which lowers it by one
 * Otherwise it is very similar to the regular alphabet
 * program
 */
