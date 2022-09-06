#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: dimesimal array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			grid[i][n] = 0;
		}
	}
	return (grid);
}
