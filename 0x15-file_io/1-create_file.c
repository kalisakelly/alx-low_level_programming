#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the the file to create
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure(file can not be created
  *file can not be written, write “fails”, etc…)
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
		;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
