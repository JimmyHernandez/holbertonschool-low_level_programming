#include "main.h"
/**
 * *_strncpy - Copies a string.
 * @dest: Variable for destination.
 * @src: Variable for source.
 * @n: Variable for interger.
 * Return: destination (Success).
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int CpyStr;

	for (CpyStr = 0; CpyStr < n && src[CpyStr] != '\0'; CpyStr++)
	{
		dest[CpyStr] = src[CpyStr];
	}
	for (; CpyStr < n; CpyStr++)
	{
		dest[CpyStr] = '\0';
	}
	return (dest);
}
