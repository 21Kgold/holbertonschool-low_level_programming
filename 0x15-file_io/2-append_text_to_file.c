#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure ie. file can not be created, file can
 * not be written, write “fails”, filename is NULL, etc.
 * Description: Do not create the file if it does not exist; If text_content is
 * NULL, do not add anything to the file. Return 1 if the file exists and -1 if
 * the file does not exist or if you do not have the required permissions to
 * write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i; /*i is the length of the string text_content*/
	ssize_t nw;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0' ; i++)
		{
		}
		nw = write(fd, text_content, i);
		if (nw == -1)
		{
			return (-1);
		}
	}
	else
	{
		return (1);
	}
	close(fd);
	return (1);
}
