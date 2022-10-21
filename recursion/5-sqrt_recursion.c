#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the value of the natural square root number
 * @n: the number rooted
 * Return: the value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * full_sqr_root - finds the natural square root of a number
 * @i: increments to find it
 * Return: the root
 * @n: the number rooted
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (actual_sqrt_recursion(n, i + 1));
}
