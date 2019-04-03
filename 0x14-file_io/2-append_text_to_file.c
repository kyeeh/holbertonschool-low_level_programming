#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The file's name.
 * @text_content: The file's content.
 * Return: 1 on sucess or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc, error = -1, size = 0;

	if (filename)
	{
		fdesc = open(filename, O_RDWR | O_APPEND);
		if (fdesc > 0)
		{
			if (text_content)
			{
				while (text_content[size] != '\0')
					size++;
				error = write(fdesc, text_content, size);
			}
			else
				error = 1;
			close(fdesc);
		}
	}
	return ((error >= 0) ? 1 : -1);
}
