#include<stdio.h>
#include "holberton.h"

int usage_msg(void);
int cant_read(char *);
int cant_write(char *);
int cant_close(int);
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: 1 on sucess or -1 on failure.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_origin, fd_destiny, size = 1, error = -1, buff_size = 1024;

	if (argc != 3)
		exit(usage_msg());
	fd_origin  = open(argv[1], O_RDONLY);
	fd_destiny = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_origin)
	{
		if (fd_destiny)
		{
			while (size)
			{
				size = read(fd_origin, buffer, buff_size);
				if (size < 0)
					exit(cant_read(argv[1]));
				error = write(fd_destiny, buffer, size);
				if (error < 0)
					exit(cant_write(argv[2]));
			}
		}
		else
			exit(cant_write(argv[2]));
		if (close(fd_origin) < 0)
			exit(cant_close(fd_origin));
		if (close(fd_destiny) < 0)
			exit(cant_close(fd_destiny));
	}
	else
		exit(cant_read(argv[1]));
	return ((error >= 0 && error == size) ? error : 0);
}

/**
 * usage_msg - print error message to describe usage.
 * Return: 97 for exit param.
 */
int usage_msg(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

/**
 * cant_read - print error message for reading error.
 * @fdin: File descriptor for input.
 * Return: 98 for exit param.
 */
int cant_read(char *fdin)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fdin);
	return (98);
}

/**
 * cant_write - print error message for writing error.
 * @fdout: File descriptor for output.
 * Return: 99 for exit param.
 */
int cant_write(char *fdout)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fdout);
	return (99);
}

/**
 * cant_close - print error message for closing error.
 * @fdout: File descriptor for closing file.
 * Return: 100 for exit param.
 */
int cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	return (100);
}
