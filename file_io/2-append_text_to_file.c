#include "main.h"
#include <string.h>
/**
 *append_text_to_file - apend text to file
 *@filename: file name
 *@text_content: text content
 *Return: 1 success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rewtr, buffer = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
	return (-1);
	}
	rewtr = write(fd, text_content, buffer);
	
	if (rewtr == -1)
	{
	return (-1);
	}
	close(fd);
	return (1);
}
