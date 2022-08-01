#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print number from 0 - 14 x 10 veces
 *Return: void
 */
void more_numbers(void)
{
	int number, list;

	for (list = 0; list < 10; list++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar(number / 10 + '0');

			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}

