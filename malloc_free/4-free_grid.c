#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a given grid in the HEAP.
 * @grid: Pointer to the bidimensional array.
 * @height: Input height.
 *
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}
