#include "function_pointers.h"
/**
 *@name: name input
 *
 *@f:the function to use
 *
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);

}
