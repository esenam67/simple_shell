#include "shellsh.h"

/**
 * loc - check function
 * @charac: string argument
 * Description: getting the PATH for the function
 *
 * Return: char
 */

char *loc(char *charac)
{
char *Pth, *Pthcopy;
int leng, L;
char *Pth_tok;
char *ins;
struct stat c;

Pth = getenv("PATH");

if (Pth)
{
/*duplicate*/
Pthcopy = strdup(Pth);

leng = strlen(charac);
/* tokenizing the copy*/
Pth_tok = strtok(Pthcopy, ":");
/* while loop*/
while (Pth_tok != NULL)
{
L = strlen(Pth_tok);

ins = malloc(leng + L + 2);
/* token in pth*/
strcpy(ins, Pth_tok);
strcat(ins, "/");
strcat(ins, charac);
strcat(ins, "\0");

if (stat(ins, &c) == 0)
{
free(Pthcopy);
return (ins);
}
else
{
free(ins);
Pth_tok = strtok(NULL, ":");
}
}
free(Pthcopy);

if (stat(ins, &c) == 0)
{
return (charac);
}
return (NULL);
}
return (NULL);
}
