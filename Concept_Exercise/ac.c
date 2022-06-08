#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a function
 * @ac: argument 1
 * @av: argument 2
 * Return: 0
 */

int main(int ac, char **av)
{
	(void)ac;

	int i = 0;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	printf("\n");
	return (0);
}
