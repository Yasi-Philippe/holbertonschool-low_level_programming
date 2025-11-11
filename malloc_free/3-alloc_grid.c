#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Prepares a bidimensional array in the HEAP.
 * @width: Input width.
 * @height: Input height.
 *
 * Return: Pointer to the bidimensional array. NULL if malloc fails.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int r, c;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	for (r = 0; r < height; r++)
	{
		ptr[r] = malloc(width * sizeof(int));
		if (ptr[r] == NULL)
		{
			free(ptr);
			return (0);
		}
		for (c = 0; c < width; c++)
			ptr[r][c] = 0;
	}
	return (ptr);
}
