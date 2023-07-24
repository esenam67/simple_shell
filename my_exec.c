#include "shellsh.h"

/**
 * cmdex - check function
 * @argv: ponter
 * Description: path
 */

void cmdex(char **argv)
{
char *cmd = NULL, *Rcmd = NULL;

if (argv)
{
/* get the command */
cmd = argv[0];

Rcmd = loc(cmd);
/* execute the command with execve */
if (execve(Rcmd, argv, NULL) == -1)
{
perror("Error:");
}
}
}
