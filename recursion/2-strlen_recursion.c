#include "main.h"
/**
 * _strlen_recursion - Calculate the nr of chars in a string,
 * via recursion
 * @s: the string to be counted
 * Return: The lengh
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

