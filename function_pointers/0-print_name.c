#include "function_pointers.h"
/**
 * prinf_name - prints out Bob Dylan
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
/**
 * what this function does is simply print an imputted name
 * the name is given as char * and f is a function pointer of print_name
 * we firstly make sure that name and the value in f are the same
 * afterwards we simply run the print name function on the given name
 */
