#include "shellsh.h"

/**
 * thegetline - check funtion
 * Description:
 * Return: an int
 */

int thegetline(void)
{
char  *Entry;
size_t TheSize = 0;
ssize_t CheckRtr;
char *Entry_copy = NULL;

CheckRtr = getline(&Entry, &TheSize, stdin);
if  (CheckRtr == -1)
{
printf("Exit.........route\n");
return (-1);
}
write(STDIN_FILENO, Entry, TheSize);
/**
Entry_copy = malloc(sizeof(char) * CheckRtr);
if (Entry_copy == NULL)
{
perror("tsh: memory allocation error");
return (-1);
}
_cpystr(Entry_copy, Entry);
*/


free(Entry);
return (0);
}
