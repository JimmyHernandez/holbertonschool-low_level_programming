#include "main.h"
/**
 *_strpbrk - length of a prefix substring
 *@s: string
 *@accept: accepted bytes.
 *Return: location or null.
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	while (s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			return (s);
		}
	s++;
	}
	return (NULL);
}
