#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: place that holds copy
 * @src: source to be copy
 * @n : bytes to be copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
