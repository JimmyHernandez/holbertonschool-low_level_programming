#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Character for file's name.
 * @text_content: Content of a file.
 * Return: 1 (Success), -1 (Failure)
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int FDesc, NLetters, RWR;

	if (!filename)
		return (-1);

	FDesc = open(filename, O_WRONLY | O_APPEND);
	if (FDesc == -1)
		return (-1);

	if (text_content)
	{
		for (NLetters = 0; text_content[NLetters]; NLetters++)
			;
		RWR = write(FDesc, text_content, NLetters);
		if (RWR == -1)
			return (-1);
	}
	close(FDesc);
	return (1);
}
