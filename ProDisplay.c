#include "shellsh.h"

/**
 * main - shell like function
 * Description: Printing a prompt read and return an output
 * Return: 0
 */

int main(void)
{
char *ThePro = "$ ";
while(1)
{
write(STDOUT_FILENO, ThePro, 2);
thegetline();
}
return (0);
}
