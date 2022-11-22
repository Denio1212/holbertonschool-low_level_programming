#include "main.h"

/**
 * read_textfile - reads a given text file and returns how many chars printed
 * @filename: name of file printed
 * @letters: how many letters there are
 * Return: Char count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t size;

	buff = malloc(sizeof(char) * letters + 1);

	fd = open(filename, O_RDONLY);
	size = read(fd, buff, letters);
	if (fd == -1)
		return (0);
	if (size == -1)
		return (0);
	if (!buff | !filename)
		return (0);
	buff[size] = '\0';
	size = write(STDOUT_FILENO, buff, size);

	if (size == -1)
		return (0);
	close(fd);
	return (size);
}

