#include <stdio.h>
/**
 * main - entry point
 *@argc: counts arguments
 *@argv: vector for strings
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
	printf("%s\n", argv[idx]);
	}
return (0);
}
