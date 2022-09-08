#include "main.h"
/**
 * array_range - nested loop to make grid
 * @min: minimun
 * @max: maximun
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *rng, size, i;

	if (min > max)
		return (0);

	size = (max - min) + 1;

	rng = malloc(size * sizeof(int));

	if (rng == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		rng[i] = min + i;

	}
	return (rng);
}
