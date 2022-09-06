#include "main.h"
/**
 * free_grid - use function free()
 *@grid: input
 *@height: input
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
