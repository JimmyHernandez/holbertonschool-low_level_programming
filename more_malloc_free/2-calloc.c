#include "main.h"
/**
 * _calloc - allocates memory for array
 *@nmemb: num element
 *@size: size element
 *
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
	{ return (0); }

	if (size == 0)
	{ return (0); }

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
