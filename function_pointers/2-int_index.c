#include "function_pointers.h"

/**
 * int_index - search indx
 * @array: the array
 * @size: size of array
 * @cmp: points to comp function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if ((*cmp)(array[idx]))
			return (idx);
	}
	return (-1);
}
