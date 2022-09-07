#include "main.h"
/**
 * malloc_checked - checks memory allocation
 *@b: input
 *Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
