#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text
 * @letters: ...
 * @filename: ...
 *
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int i;
ssize_t bytes;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
return (0);
i = open(filename, O_RDONLY);
if (i == -1)
return (0);
bytes = read(i, &buf[0], letters);
bytes = write(STDOUT_FILENO, &buf[0], bytes);
close(i);
return (bytes);
}
