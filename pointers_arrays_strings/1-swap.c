#include "main.h"
/**
 * swap_int - Changes the values of 2 variables with eachother
 * @b: the variable to be swapped with @a
 */ 
void swap_int(int *a, int *b)
{
	int c;

	c =  *a;
	*a = *b;
	*b = c;
}

