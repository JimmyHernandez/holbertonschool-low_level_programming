#include "main.h"
#include <string.h>
/**
 *create_file - create a file
 *filename: file
 *text_content: file content
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rewrt, buffer = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	rewrt = write(fd, text_content, buffer);

	
	if (filename == NULL)
	{
		return (-1);
	}
	
	if (fd == -1 && rewrt == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	if (fd == 0000)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

