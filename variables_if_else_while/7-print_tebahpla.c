#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int lq;

	for (lq = 'z'; lq >= 'a'; lq--)
	{
		putchar(lq);
	}
	putchar('\n');
	return (0);
}
