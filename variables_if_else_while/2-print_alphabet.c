#include <stdio.h>
/**
 * main - prints the alphabet,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		/* this prints the character */

	}

	putchar('\n');
	/* this adds the newline everytime a new character is printed */

	return (0);
}
/* x++ adds one every time it repeats */
