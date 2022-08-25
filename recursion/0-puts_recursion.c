#include "main.h"

/**
 * _puts_recursion - Entry point
 *@s: string of words
 *Return: Sucess 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
	}
	else
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
