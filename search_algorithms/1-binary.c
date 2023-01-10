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
	size_t l = 0, r = 0, i;
	int m = 0;

	l = 0;
	r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
		}
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	return (-1);
}

