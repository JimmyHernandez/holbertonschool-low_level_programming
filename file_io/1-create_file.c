#include "main.h"
#include <string.h>
/**
 *create_file - create a file
 *@filename: file
 *@text_content: file content
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int WRITE;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	WRITE = write(fd, text_content, numletters);

	if (WRITE == -1)
		return (-1);

	close(fd);

	return (1);
}
