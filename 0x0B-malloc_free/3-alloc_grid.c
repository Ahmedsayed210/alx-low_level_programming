#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, s;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			free(arr);
			for (s = 0; s <= a; s++)
				free(arr[s]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (s = 0; s < width; s++)
		{
			arr[a][s] = 0;
		}
	}
	return (arr);
}
