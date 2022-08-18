#include "main.h"
/**
 * *string_toupper - Changes all lowercase to uppercase
 *
 * @e: Character for the letters
 *
 * Return: e (Success)
 **/
char *string_toupper(char *e)
{
	int Toupper;

	for (Toupper = 0; e[Toupper] != 0; Toupper++)
	{
		if (e[Toupper] >= 'a' && e[Toupper] <= 'z')
		{
			e[Toupper] = e[Toupper] - 32;
		}
	}
	return (e);
}
