#include "shell.h"

/**
 * change_dir - change directory
 * @dir - directory to change to
 * Return: 1
 */
int change_dir(char **dir, char *err)
{
	if (dir[1] == NULL)
	{
		perror(err);
	}
	else if (chdir(dir[1]) != 0)
	{
		perror(err);
	}
	return (1);
}
