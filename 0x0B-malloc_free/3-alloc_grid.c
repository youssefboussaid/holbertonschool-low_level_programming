#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a 2D array of ints
 *
 * @width: number of    columns   for 2D array
 * @height: number of   rows      for 2D array
 *
 * Return: pointer to a 2D array, NULL on error
 */

int **alloc_grid(int width, int height)
{
	return (malloc(width * height * sizeof(int)));
}
