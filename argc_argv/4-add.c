#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 *@argc: counts arguments
 *@argv: vector for strings
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int idx, j, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (idx = 1; idx < argc; idx++)
		{
			for (j = 0; argv[idx][j]; j++)
			{
				if (isdigit(argv[idx][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum +=  atoi(argv[idx]);
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
