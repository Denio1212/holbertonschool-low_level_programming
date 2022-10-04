#include <stdio.h>

/**
 * main - prints all single digit numbers
 * starting from 0 with putchar
 * Return: Always 0 (Success)
 */


int main(void)
{
	int nr; 

	for (nr = 48; nr < 58; nr++)
	{	
		putchar(nr);

	}
	putchar('\n');

	return (0);
}
