#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename: name of the file
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, ch;

	if (!filename)
		return (-1);
	if (filename && !text_content)
		return (-1);
	if (!filename && !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	{
		for (len = 0; text_content[len]; len++)
			;
		ch = write(fd, text_content, len);
		if (ch == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
