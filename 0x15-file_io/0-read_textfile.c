#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads text file and prints it to the
  *POSIX standard output
  * @filename: represents a pointer
  * @letters: the number of letters it should read or print
  * Return: the actual number of letters it could read and print
  *0 if filename is NULL, can't be opened, read or write fails
  *or does not write the expected amount of bytes
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t numRD, numWR;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	numRD = read(fd, buf, letters);
	numWR = write(STDOUT_FILENO, buf, numRD);
	close(fd);
	free(buf);
	return (numWR);
}
