#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: The file's name.
 * @letters: The file's length.
 * Return: 1 on sucess or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int size;
	char *buffer = NULL;
	int fdesc, error = -1;

	if (filename)
	{
		fdesc = open(filename, O_RDONLY);
		buffer = malloc(sizeof(char) * letters);
		if (fdesc > 0 && buffer)
		{
			size = read(fdesc, buffer, letters);
			error = (size <= letters) ? write(STDOUT_FILENO, buffer, size) : -1;
			close(fdesc);
		}
	}
	free(buffer);
	return ((error >= 0) ? error : 0);
}
