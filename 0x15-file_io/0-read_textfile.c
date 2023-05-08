#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to filename
 * @letters: reads letters
 *
 * Return: if write does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_written, t_bytes = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((b_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (t_bytes + b_read > letters)
			b_read = letters - t_bytes;
		b_written = write(STDOUT_FILENO, buffer, b_read);
		if (b_written == -1 || b_written != b_read)
		{
			close(fd);
			return (0);
		}
		t_bytes += b_read;
		if (t_bytes == letters)
			break;
	}
	close(fd);
	return (t_bytes);
}
