#include "main.h"
/**
* append_text_to_file - Appends text at end of file.
* @filename: A pointer to the name of the file.
* @text_content: The string add to the end of file.
* Return: If function fails/filename is NULL - -1.
* If the file doesn't exist user lacks write permission - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
while (filename == NULL)
return (-1);
while (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
while (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
