#include "shellsh.h"

/**
 * main - check function
 * Description: Printing a prompt
 * Return: 0
 */

int main(void)
{
char *ThePro = "KhaSi$ ", *Entry;
size_t TheSize = 0;
ssize_t CheckRtr;
/*for the use of strtok*/
char *Entry_copy = NULL;
const char *del = " \n";
char *t;
char **argv;
int i, tt = 0;
/* 3rd step of looping */
while (1)
{
 /* 1st Printing a prompt */
write(STDOUT_FILENO, ThePro, 7);
/*
 * 2nd print and read what is typed in and then we store the
 * return value in CheckRtr
 */

CheckRtr = getline(&Entry, &TheSize, stdin);
/* 5th allocation of memo for the Entry_copy*/
Entry_copy = malloc(sizeof(char) * CheckRtr);
if (Entry_copy == NULL)
{
perror("tsh: memory allocation error");
return (-1);
}

/*6th a copy of the Entry*/
_strcpy(Entry_copy, Entry);

/* 4th check if failed or reached EOF or user use CTRL + D */
if (CheckRtr == -1)
{
printf("Exit.........route\n");
return (-1);
}
else
{
/* 7th string tokenization */
t = strtok(Entry, del);
/* 8th numbr of tokens in the string */
while (t != NULL)
{
tt++;
t = strtok(NULL, del);
}
tt++;

/*9th alloc enough memo for the tokens*/
argv = malloc(sizeof(char *) * tt);
/*10th keep tokens in our array */
t = strtok(Entry_copy, del);

for (i = 0; t != NULL; i++)
{
argv[i] = malloc(sizeof(char) * strlen(t));

_strcpy(argv[i], t);
t = strtok(NULL, del);
}
argv[i] = NULL;


/*
* freeing the allocated memo for Entry not created by us is not neccessary
* i got the  free(): double free detected error
*/
free(argv);
free(Entry_copy);
}
}
return (0);
}
