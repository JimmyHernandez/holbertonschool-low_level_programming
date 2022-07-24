#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char alph, ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
		for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}
	putchar('\n');
return (0);
}
