#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, nr_from, nw_to, i;
	char *ptr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	nr_from = read(fd_from, ptr, 1024);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		exit(99);
	}
	for ( ; nr_from > 0 ;)
	{
		nw_to = write(fd_to, ptr, nr_from);
		if (nw_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
			exit(99);
		}
		nr_from = read(fd_from, ptr, 1024);
	}
	i = close(fd_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	i = close(fd_to);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	free(ptr);
	return (0);
}
