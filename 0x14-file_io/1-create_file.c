#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: The file's name.
 * @text_content: The file's content.
 * Return: 1 on sucess or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc, error, size = 0;

	if (filename)
	{
		fdesc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fdesc > 0)
		{
			while (text_content && text_content[size] != '\0')
				size++;
			error = write(fdesc, text_content, size);
			close(fdesc);
			return ((error > 0) ? 1 : -1);
		}
	}
	return (-1);
}
