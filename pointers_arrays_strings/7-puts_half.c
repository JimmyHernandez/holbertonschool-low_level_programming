#include "main.h"
/**
 * puts_half - check the code
 * @str : pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int ln = 0, i, num;

	while (str[ln] != '\0')
		ln++;

	if (ln % 2 == 0)
		num = ln / 2;

	else
		num = (ln - 1) / 2;

	for (i = num; i < ln; i++)
		_putchar(str[i]);

	_putchar('\n');
}
