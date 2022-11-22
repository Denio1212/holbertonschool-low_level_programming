#include "main.h"
/**
 * _strlen - finds length of text_content
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}


/**
 * create_file - creates a file with certain text in it
 * @filename: its name
 * @text_content: its content
 * Return: 1 if success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (!text_content)
		return (1);
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
