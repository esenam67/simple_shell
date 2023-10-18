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

int thegetline(void);
char *_cpystr(char *dest, char *src);

#endif /* SHELLSH_h */
