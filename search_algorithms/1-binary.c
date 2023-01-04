#include "search_algos.h"
/**
* binary_search - searches through a sorted array and finds the value
* @array: the sorted array
* @size: size of array
* @value: number we are trying to find
* Return: -1 if not found i if true
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, h, l;

	l = 0;
	h = size - 1;
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
		}
		printf("\n");

		i = (l + h) / 2;
		if (array[i] < value)
			l = i + 1;
		else if (array[i] > value)
			h = i - 1;
		else
			return (i);
	}
	return (-1);
}





