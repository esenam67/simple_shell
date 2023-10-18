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

CheckRtr = getline(&Entry, &TheSize, stdin);
if  (CheckRtr == -1)
{
printf("Exit.........route\n");
return (-1);
}
write(STDIN_FILENO, Entry, TheSize);
free(Entry);
return (0);
}
