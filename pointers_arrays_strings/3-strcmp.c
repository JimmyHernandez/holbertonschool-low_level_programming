#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Variable for first string.
 * @s2: Variable for second
 * Return: Strings length and comparations
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (*s1 - *s2);
}
