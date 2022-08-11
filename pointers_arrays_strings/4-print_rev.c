#include "main.h"
/**
* print_rev - check the code
* @s : pointer type char
** Return : void;
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
