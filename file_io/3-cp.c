#include "main.h"
/**
 * main - cp function
 * @argc: nr of arguments
 * @argv: command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, n;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n = read(fd1, buffer, 1024)) > 0)
	{
		if ((write(fd2, buffer, n)) != n || fd2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	if (close(fd1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(98);
	}
	if (close(fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(98);
	}
	return (0);
}


