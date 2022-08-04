#include "main.h"
/**
 * print_triangle - check the code
 * @size : holds number
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int num, n, t;

	n = size - 1;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (t = 0; t < size; t++)
			{
				if (t < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}

