#include "function_pointers.h"
/**
 * array_iterator - iterates an array untill the end
 * @size: array size
 * @array: the array
 * @action: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		while (i < size)
			action(*(array + i++));
	}
}
