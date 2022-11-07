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
/**
 * This one is quite simple, we have an array, its size and a
 * pointer to an array named action.
 * we need iteration to scroll through the array and we make sure that
 * all variables are existing, then a while loop where i stays under
 * size iterates the array, where then we run the action pointer with
 * array as the base and then we add all number positions to print all
 * numbers
 */
