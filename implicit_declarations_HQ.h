#ifndef _IMPLICIT_DECLARATIONS_HQ_H
#define _IMPLICIT_DECLARATIONS_HQ_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <errno.h>

/* Declarations for shell.c */
extern char **environ;

/* Declarations for strings.c */
char *_strcatl(char *dest, char *src);
int _strlen(char *string);
int _strncmp(char *first, char *second, int limit);
char *newcat(char *dest, char *src);
char *addpath(char *cmd, char *envar);

/* Declarations for signal.c */
void ctrlc(int name);

#endif
