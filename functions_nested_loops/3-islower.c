#include "main.h"
/**
*_islower - search for the lower character
*@c: input variable
*Return: 0 success and 1 for lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
