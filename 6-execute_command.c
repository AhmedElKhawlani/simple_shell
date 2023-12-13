#include "simple_shell.h"

/**
 * execute_command - uses execve to execute a command in a child process
 * @splitted_command: array of strings that contains the words of the command
 * @av: array of strings that represents the arguments
*/

int execute_command(char **splitted_command, char **av)
{
	int child;
	int child_status;

	child = fork();
	if (child == 0)
	{
		if (execve(splitted_command[0], splitted_command, environ) == -1)
		{
			perror(av[0]);
			free_array(splitted_command);
			exit(127);
		}
	}
	else
	{
		waitpid(child, &child_status, 0);
		free_array(splitted_command);
	}
	return (WEXITSTATUS(child_status));
}
