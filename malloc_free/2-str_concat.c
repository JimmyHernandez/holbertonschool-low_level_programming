#include "main.h"
/**
 * str_concat - concatane string
 *@s1: 1
 *@s2: 2
 *Return: ...
 */
char *str_concat(char *s1, char *s2)
{
	int idx1, idx2, idx3, limit;
	char *content;
	unsigned int sum;

	if (s1 == NULL && s2 == NULL)
		{	s1 = " ";
			s2 = " ";
		}
	for (idx1 = 0; s1[idx1] != '\0'; idx1++)
		{}
	for (idx2 = 0; s2[idx2] != '\0'; idx2++)
		{}
	sum = idx1 + idx2;
	content = malloc(sizeof(char) * (sum + 1));

		if (content == NULL)
		{
			free(content);
			return (NULL);
		}
	for (idx3 = 0; idx3 < idx1; idx3++)
	{
		content[idx3] = s1[idx3];
	}
	limit = idx2;
	for (idx2 = 0; idx2 <= limit; idx3++, idx2++)
	{
		content[idx3] = s2[idx2];
	}
	return (content);
}
