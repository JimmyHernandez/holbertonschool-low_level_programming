#include "main.h"
/**
* *_strstr - Entry
* @haystack: char inside
* @needle: mini string
* Return: int
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, a, k;

	a = 0;

	j = 0;

	k = 0;

	while (*(needle + j) != '\0')
		j++;

	while (*(haystack + k) != '\0')
		k++;

	if (j == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[a])
			a++;
		else
			a = 0;

		if (j == a)
		{
			haystack = haystack + i - j + 1;
			return (haystack);
		}

	}

	return (0);

}
