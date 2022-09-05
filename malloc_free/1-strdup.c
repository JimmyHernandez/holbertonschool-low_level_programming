#include "main.h"
/**
 * _strdup - duplicates
 *@str: string
 *Return: copy
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len, paste;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (paste = 0; paste <= len; paste++)
	{
		copy[paste] = str[paste];
	}
	return (copy);
}
