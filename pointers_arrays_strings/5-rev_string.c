#include "main.h"
/**
 * rev_string  - reverses any given string
 * @s: the string reversed
 */
void rev_string(char *s)
{
	char t;
	int i, size, sizer;

	size = 0;
	sizer = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	sizer = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		t = s[i];
		s[i] = s[sizer];
		s[sizer--] = t;
	}
}
