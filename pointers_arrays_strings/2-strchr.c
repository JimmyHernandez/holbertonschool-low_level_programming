#include "main.h"
/**
 * _strchr - entry point
 *@s: string
 *@c: character
 *Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)


	for (i = 0; i <= j; i++)
	{
		s++;
		if (*s == c)

			return (s);
	}

	return (0);
}
