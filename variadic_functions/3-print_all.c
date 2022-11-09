#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap: Argument pointer
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - Prints a string
 * @ap: Argument pointer
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}
/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	print_format form[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
	};

	va_list(ap);

	int i = 0;
	int j = 0;
	char *seperator = "";

	va_start(ap, format);

	while (format && format[i])
	{
		while (form[j].str)
		{
			if (*form[j].str == format[i])
			{
				printf("%s", seperator);
				form[j].print(ap);
				seperator = ", ";
			}

			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(ap);
}

