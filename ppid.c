#include <stdio.h>
#include <unistd.h>

/**
 * main -entry point
 *
 * @void: No arguments or parameters
 *
 * Return: 0 on success
 */

int main(void)
{
	pid_t my_parentid;

	my_parentid = getppid();
	printf("%u\n", my_parentid);
	return (0);
}
