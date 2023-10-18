#include "shellsh.h"

int thegetline()
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
printf("%s\n", Entry);
free(Entry);
return(0);
}
