#include "shellsh.h"
/**
 * loc - check function
 * @charac: string argument
 * Return: char
 */
char *loc(char *charac)
{
char *Pth, *Pthcopy, *Pth_tok, *ins;
int leng, L;
struct stat c;
Pth = getenv("PATH");
if (Pth)
{
Pthcopy = strdup(Pth);
leng = strlen(charac);
Pth_tok = strtok(Pthcopy, ":");
while (Pth_tok != NULL)
{
L = strlen(Pth_tok);
ins = malloc(leng + L + 2);
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
