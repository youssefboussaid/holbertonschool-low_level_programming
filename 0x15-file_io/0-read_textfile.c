#include "main.h"
/**
 * read_textfile - Reads a text file and prints iti to the POSIX stdout
 * @filename: text file to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readcount = 0;
	ssize_t writecount = 0;


	if (filename == NULL)
		return (0);
	buffer = malloc((sizeof(char) * letters));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	readcount = read(fd, buffer, letters);
	if (readcount == -1)
	{
		free(buffer);
		return (0);
	}
	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (writecount);
}
