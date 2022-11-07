#include "function_pointers.h"
/**
 * int_index - finds an integer and returns the ammount found
 * @array: the aray where the ints are stored
 * @size: size of array
 * @cmp: pointer to a compare function
 * Return: i if there are any, -1 if size is <= 0 or if none were
 * found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			return (i);
		}
	}
	return (-1);
}

