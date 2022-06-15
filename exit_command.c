#include "shell.h"

/**
* exit_cmd - handles the exit command
* @command: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
int exit_cmd(char **command, char *line)
{
	int status = 0;

	(void)line;
	if (command[1] != NULL)
	{
		status = atoi(command[1]);
		exit(status);
	}
	/*free(line);*/
	free_buffers(command);
	exit(EXIT_SUCCESS);
}
