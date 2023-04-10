#include "main.h"

/**
 * read_textfile - Main function that reads a text file and prints POSIX stdio
 * @filename: text file
 * @letters: no. of letters
 * Return: W or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(fd);
	return (w);
}
