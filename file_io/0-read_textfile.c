#include "main.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: a pointer to a string representing the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*File descriptor*/
	ssize_t bytes_read; /*Number of bytes read from the file*/
	ssize_t bytes_written; /*Number of bytes written to standard output*/
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /*Open the file as read-only*/
	if (fd == -1) /*Handle errors*/
		return (0);

	buffer = malloc(letters); /*Memory space allocated to store read data*/
	if (buffer == NULL)
		return (0);

	/*Reads until bytes of letters from the file into buffer.*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/*Writes m bytes from buffer to standard output*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_written);
}
