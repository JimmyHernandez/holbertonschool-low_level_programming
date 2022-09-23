#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: name input
 *
 *@f:the function to use
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		{
			return;
		}

	else {

		f(name);
		}		
}
