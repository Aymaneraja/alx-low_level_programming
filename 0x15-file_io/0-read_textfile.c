#include<stdlib>
#include"main.h"
/**
 * read_textfile - Read textfile print to stdout.
 *
 * @filename : The file txe being read .
 *
 * @letters : numbers of letters to be read .
 *
 * Return -W : actual number of bytes read and printed and 0 when function fails or file name is none.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = maolloc(sizeof(char)*letters);
	t = read(fd, buf, letters);
	W = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
