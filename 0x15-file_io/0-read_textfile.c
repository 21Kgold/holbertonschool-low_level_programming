#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be printed
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if the file can not be opened or read, or if filename is NULL,
 * also return 0 if if write fails or does not write the expected amount of
 * bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file descriptor of data stream*/
	ssize_t nr; /*number of bytes that has been read*/
	ssize_t nw; /*number of bytes that has been written*/
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * (letters));
	if (ptr == NULL)
	{
		return (0);
	}
	nr = read(fd, ptr, letters);
	nw = write(STDOUT_FILENO, ptr, nr);
	close(fd);
	free(ptr);
	return (nw);
}
