#include "variadic_functions.h"
/**
 * print_strings - prints given strings
 * @seperator: the seperator between numbers
 * @n: thee number of strings
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);

		if (!s)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(arg);
}

