#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all paramatres
 * @n: the number of parametres
 * Return: Sum of all parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list elem;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(elem, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(elem, int);
	}
	va_end(elem);
	return (sum);
}

