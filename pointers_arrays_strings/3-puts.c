#include "main.h"
/**
 * _puts - print a sequence of character
 * @str:input data
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
