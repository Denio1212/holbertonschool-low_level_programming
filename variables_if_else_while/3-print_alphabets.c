#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cc;

	for (cc = 'a'; cc <= 'z'; cc++)
		putchar(cc);

	for (cc = 'A'; cc <= 'Z'; cc++)
		putchar(cc);

	putchar('\n');

	return (0);
}
