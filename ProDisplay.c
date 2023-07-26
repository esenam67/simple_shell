#include "shellsh.h"
/**
 * main - check function
 * @ac: int
 * @argv: pointer to pointer
 * Return: 0
 */
int main(int ac, char **argv)
{
char *ThePro = "$ ", *Entry, *Entry_copy = NULL, *t;
size_t TheSize = 0;
ssize_t CheckRtr;
const char *del = " \n";
int i, tt = 0; (void)ac;
while (1)
{
write(STDOUT_FILENO, ThePro, 2);
CheckRtr = getline(&Entry, &TheSize, stdin);
if (CheckRtr == -1)
{
return (-1);
}
Entry_copy = malloc(sizeof(char) * CheckRtr);
if (Entry_copy == NULL)
{
return (-1);
}
_strcpy(Entry_copy, Entry);
t = strtok(Entry, del);
while (t != NULL)
{
tt++;
t = strtok(NULL, del);
}
tt++;
argv = malloc(sizeof(char *) * tt);
t = strtok(Entry_copy, del);
for (i = 0; t != NULL; i++)
{
argv[i] = malloc(sizeof(char) * strlen(t));
_strcpy(argv[i], t);
t = strtok(NULL, del);
}
argv[i] = NULL;
cmdex(argv);
}
free(argv);
free(Entry_copy);
return (0);
}
