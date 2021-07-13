#include <stdio.h>
#include <stdlib.h>
/**
 * aloc_grid- create a 2 dimensional array of int
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to the 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
    return (malloc(width * height * sizeof(int)));
}
