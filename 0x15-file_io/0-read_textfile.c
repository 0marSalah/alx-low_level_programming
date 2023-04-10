#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t read_count, write_count;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}

read_count = read(fd, buf, letters);
if (read_count == -1)
{
free(buf);
close(fd);
return (0);
}

write_count = write(STDOUT_FILENO, buf, read_count);
if (write_count == -1 || write_count != read_count)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);

return (write_count);
}
