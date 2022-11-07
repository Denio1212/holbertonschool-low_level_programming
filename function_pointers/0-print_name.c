#include "function_pointers.h"
/**
 * print_name - prints out Bob Dylan
 * @name: Holds the name
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
