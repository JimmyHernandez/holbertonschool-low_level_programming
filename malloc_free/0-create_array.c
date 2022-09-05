#include "main.h"
/**
 * create_array - crear un arreglo
 *@size: size
 *@c: character
 *Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)

	{
	return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		arr[idx] = c;
	}
	return (arr);
}
