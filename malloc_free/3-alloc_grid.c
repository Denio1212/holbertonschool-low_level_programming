#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - makes a 2d array of ints
 * @width: width of the table
 * @height: Height of the table
 * Return: a pointer to the table
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
		free(arr);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
		return (arr);
		free(arr);
}
