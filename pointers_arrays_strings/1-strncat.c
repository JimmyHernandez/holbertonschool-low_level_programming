#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: Variable for destination.
 * @src: Variable for source.
 * @n: Variable.
 * Return: destination (Success)
 **/
char *_strncat(char *dest, char *src, int n)
{
	int Str001 = 0, Str002 = 0;

	while (dest[Str001] != '\0')
	{
		Str001++;
	}
	while (src[Str002] != '\0' && Str002 < n)
	{
		dest[Str001] = src[Str002];
		Str001++;
		Str002++;
	}
	dest[Str001] = '\0';
	return (dest);
	_putchar('\n');
}
