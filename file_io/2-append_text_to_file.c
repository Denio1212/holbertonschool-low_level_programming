#include "main.h"
/**
 * _strlen - length of s
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - places txt at the end of file
 * @filename: name of file
 * @text_content: its content
 * Return: -1 on fail, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0334);

	if (!text_content)
		return (1);
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
