#include "search_algos.h"
/**
* binary_search - search a number with binary search.
*@array: array
*@size: size
*@value: value
*Return:  the selecte number.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t idx = 0;
	size_t right = size - 1;
	size_t middle = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= (right - 1); idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[right]);
		middle = ((left + right) / 2);
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle + 1;
		else
			return (middle);
	}
	return (-1);
}

