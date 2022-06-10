#ifndef SHELL_H
#define SHELL_H

/**
 * this is the header file that stores the prototype used 
 * stores the builtin struct
 * stores the environment variables
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* struct for builtin function*/

struct builtin
{
	char *env;
	char *exit;
	char *cd;
} builtin;

/*Prototypes Used*/

int _putchar(char c);
int main(int argc, char **argv, char *envp[]);
int handle_builtin(char **command, char *line);



#endif/*End SHELL_H*/
