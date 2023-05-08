#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the file name
 * @text_content: pointer to the body of a file
 *
 * Return: a file or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b_written, flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t m = S_IRUSR | S_IWUSR;
	size_t tl;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	tl = strlen(text_content);
	fd = open(filename, flags, m);
	if (fd == -1)
		return (-1);
	b_written = write(fd, text_content, tl);
	if (b_written == -1 || (size_t) b_written != tl)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
