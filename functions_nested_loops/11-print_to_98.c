#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @i: print from this number
 */
void print_to_98(int i)
{
	int a;

	if (i <= 98)
	{

	for (a = i; a <= 98; a++)
		{
		if (a != 98)
			printf("%d, ", a);
		else if (a == 98)
			printf("%d\n", a);
		}
	}
	else if (i >= 98)
	{
		for (a = i; a >= 98; a--)
		{
		if (a != 98)
			printf("%d, ", a);
		else if (a == 98)
			printf("%d\n", a);
		}
	}
}










