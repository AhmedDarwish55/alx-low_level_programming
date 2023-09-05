#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the string
 *
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: ...
 *
 * Return: 1 on true 0 on false
 */
int create_file(const char *filename, char *text_content)
{
int j;
ssize_t bytes = 0, len = _strlen(text_content);
if (!filename)
return (-1);
j = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (j == -1)
return (-1);
if (len)
bytes = write(j, text_content, len);
close(j);
return (bytes == len ? 1 : -1);
}
