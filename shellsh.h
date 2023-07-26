#ifndef SHELLSH_H
#define SHELLSH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

void cmdex(char **argv);
char *_strcpy(char *dest, char *src);
char *loc(char *charac);

#endif /* SHELLSH_h */
