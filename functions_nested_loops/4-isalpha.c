#include "main.h"
/**
* _isalpha: checks for alphabetic character
*@c: input
*Return: 1 alpha 0 success.
*Description: this look for letters
*/
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
