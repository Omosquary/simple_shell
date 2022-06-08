#include <unistd.h>
#include <stdio.h>

/**
 * main - is a function
 *
 * Return: 0.
 */

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("Parent Process Identifier: %u\n", ppid);
}
