#include "main.h"
/**
 *read_textfile - read and write text.
 *@filename: the file name.
 *@letters: number of letters.
 *Return: write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wrt, rd;
	char *buffer;
	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (fd < 0 && buffer == NULL)
	{
		return (0);
	}

	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);

	if (wrt < 0)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	return (wrt);

}
