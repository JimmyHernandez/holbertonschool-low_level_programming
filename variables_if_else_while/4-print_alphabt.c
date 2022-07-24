#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int lq;
	char e, q;

	e = 'e';
	q = 'q';

	for (lq = 'a'; lq <= 'z'; lq++)
	{
	if (lq != e && lq != q)
	putchar(lq);
	}
	putchar('\n');
	return (0);
}
