#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97 on failure
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to, read_count, write_count;
char buf[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file"), exit(98);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to file"), exit(99);

while ((read_count = read(fd_from, buf, 1024)) > 0)
{
write_count = write(fd_to, buf, read_count);

if (write_count == -1 || write_count != read_count)
dprintf(STDERR_FILENO, "Error: Can't write to file"), exit(99);
}

if (read_count == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file"), exit(98);

if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from), exit(100);

if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to), exit(100);

return (0);
}
