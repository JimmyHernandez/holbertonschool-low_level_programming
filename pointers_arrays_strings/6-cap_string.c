#include "main.h"
/**
 * *cap_string - Capitalizes the first letter in string.
 * @W: Variable for string.
 * Return: n (Success).
 **/
char *cap_string(char *W)
{
	int Counter, Caps;
	int Separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	Counter = 0;
	if (*(W + Counter) >= 97 && *(W + Counter) <= 122)
	{
		*(W + Counter) = *(W + Counter) - 32;
	}
	Counter = Counter + 1;
	while (*(W + Counter) != '\0')
	{
		for (Caps = 0; Caps < 13; Caps++)
		{
			if (*(W + Counter) == Separator[Caps])
			{
				if ((*(W + (Counter + 1)) >= 97) && (*(W + (Counter + 1)) <= 122))
				{
					*(W + (Counter + 1)) = *(W + (Counter + 1)) - 32;
				}
				break;
			}
		}
		Counter++;
	}
	return (W);
}
