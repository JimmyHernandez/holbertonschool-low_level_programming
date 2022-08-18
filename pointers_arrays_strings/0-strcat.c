#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src:  source.
 * Return: destination (Success)
 **/
char *_strcat(char *dest, char *src)
{
	int Str_A = 0, Str_B = 0;

	while (dest[Str_A] != '\0')
	{
		Str_A = Str_A + 1;
	}
	while (src[Str_B] != '\0')
	{
		dest[Str_A] = src[Str_B];
		Str_A = Str_A + 1;
		Str_B = Str_B + 1;
	}
	dest[Str_A] = '\0';
	return (dest);
}
