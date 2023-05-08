#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l, b_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	l = 0;
	while (text_content[l])
		l++;

	b_written = write(fd, text_content, l);
	close(fd);

	if (b_written == -1 || b_written != l)
		return (-1);

	return (1);
}
