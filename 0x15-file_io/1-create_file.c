#include "main.h"
/**
 * create_file - creates a file with permissions: rw-------
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure ie. file can not be created, file can
 * not be written, write “fails”, etc.
 * Description: If the file already exists, do not change the permissions.
 * if the file already exists, truncate it. if text_content is NULL create an
 * empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nw, i; /*i is the length of the string text_content*/

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		nw = write(fd, text_content, i);
	}
	if (nw == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
