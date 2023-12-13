#include "simple_shell.h"

/**
 * main - runs a shell
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: 0 if success or EOF
*/

int main(int ac, char **av)
{
	char *command = NULL;
	char **splitted_command = NULL;
	int exit_status = 0;
	(void) ac;

	while (!NULL)
	{
		command = new_command();
		if (command == NULL && isatty(0) == 1)
		{
			write(1, "\n", 1);
			return (exit_status);
		}
		if (command == NULL)
			return (exit_status);
		splitted_command = split_command(command);
		if (!splitted_command)
			continue;
		execute_command(splitted_command, av);
	}
}
