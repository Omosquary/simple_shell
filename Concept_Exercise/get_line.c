#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a function
 *
 * Return: line
 */

int main(void)
{
	char *buffer = NULL;
	size_t length = 1024;
	int read;

	buffer = malloc(sizeof(size_t) * length);

	while (1)
	{
		printf("cisfun$ ");
		read = getline(&buffer, &length, stdin);
		if (read != EOF)
		{
			printf("%s", buffer);
		}
	}
	return (0);
}
