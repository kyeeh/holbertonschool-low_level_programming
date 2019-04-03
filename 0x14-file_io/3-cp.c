#include<stdio.h>
#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: 1 on sucess or -1 on failure.
 */
int main(int argc, char *argv[])
{
	char *buffer = NULL;
	int fd_origin, fd_destiny, buf_size = 1024, size, error = -1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_origin  = open(argv[1], O_RDWR | O_CREAT | O_TRUNC, 0600);
	fd_destiny = open(argv[2], O_TRUNC, 664);
	if (fd_origin)
	{
		buffer = malloc(sizeof(char) * buf_size);
		if (fd_origin > 0 && buffer)
		{
			size = read(fd_origin, buffer, buf_size);
			if (size >= 0 && size <= buf_size)
				error = write(STDOUT_FILENO, buffer, size);
			close(fd_origin);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(97);		
	}
	free(buffer);
	return ((error >= 0 && error == size) ? error : 0);
}
