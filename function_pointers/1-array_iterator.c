#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

		if (array == NULL)
			return;

		if (action == NULL)
			return;

		for (idx = 0; idx < size; idx++)
		{
			action(array[idx]);
		}
}
