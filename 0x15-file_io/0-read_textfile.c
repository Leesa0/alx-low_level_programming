#include "main.h"
#include <stdlib.h>
/**
* read_textfile- write text file print to STDOUT.
* @filename: text file starts read
* @letters: number of letters that are read
* Return: w- number of bytes read and print
* 0 if function fails/filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
while (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
