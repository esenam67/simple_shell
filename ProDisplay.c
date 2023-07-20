#include "shellsh.h"

/**
 * main - check function
 * @ac: int
 * @argv: pointer to pointer
 * Description: Printing a prompt
 * Return: 0
 */

int main(int ac, char **argv)
{
char *ThePro = "KhaSi$ ", *Entry;
size_t TheSize = 0;
/* declaring void variables so that no error of a var non used*/
 (void)ac; (void)argv;
 while(1)
{
 /* 1st Printing a prompt */
write(STDOUT_FILENO, ThePro, 7);
/* 2nd print and read what is typed in */

 getline(&Entry, &TheSize, stdin);
 /* print out not gonna use it for now*/
 write(STDOUT_FILENO, Entry, sizeof(Entry));
 /* freeing the allocated memo not created by us is not neccessary
 * i got the  free(): double free detected error*/


}
 return (0);
}
