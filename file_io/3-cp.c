#include "main.h"
/**
 *main - entry point
 *@argc: numer of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, fd2, input = 1, output = 1;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	} /*open file*/
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} /*read file*/
	while (input)
	{
		input = read(fd, buffer, 1024);
	if (input == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	/*print file*/
		if (input > 0)
		{
		output = write(fd2, buffer, input);
	if (output == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	} /*close file descriptors*/
	output = close(fd);
	if (output == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

	output = close(fd2);
	if (output == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}
