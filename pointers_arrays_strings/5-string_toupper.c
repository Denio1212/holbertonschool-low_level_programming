#include "main.h"
/**
 * string_toupper - changes a sring from lowercase to uppercase
 * @s: the entry string being changed
 * Return: the text in uppercae
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

