#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @width: rows of grid
 * @height: column of grid
 * Return: pointer tob2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(width * sizeof(int));
	if (grid == NULL)
	{
		return NULL;
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
					free(grir[j]);
				}
				free(grid);

