#include "main.h"
/**
 * puts2 - check the code
 * @str : pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int ln = 0;
	int i;

	while (str[ln] != '\0')
		ln++;

	ln -= 1;

	for (i = 0; i <= ln; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
