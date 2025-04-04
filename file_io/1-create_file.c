#include "main.h"
#include <string.h>
/**
 * create_file - Function that creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 if it failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (open(filename, O_RDONLY) == -1)/*If the file doesn't exist*/
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
	}

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
