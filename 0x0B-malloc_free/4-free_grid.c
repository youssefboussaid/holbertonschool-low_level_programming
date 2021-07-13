#include <stdlib.h>
/**
 * free_grid - frees a 2D array of ints previously malloc'ed
 *
 * @grid: 2D array of ints to free
 * @height: height of grid
 *
 * Return: always void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
