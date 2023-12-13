#include "simple_shell.h"

/**
 * split_command - splits a string.
 * @command: command (string) to split.
 * Return: array of strings after split if success, NULL in fail
*/

char **split_command(char *command)
{
	int words = 0;
	int i = 0;
	char *copy = NULL;
	char *part = NULL;
	char **splitted = NULL;

	if (!command)
		return (NULL);
	copy = copy_string(command);
	part = strtok(copy, "\n\t ");
	while (part)
	{
		words++;
		part = strtok(NULL, "\n\t ");
	}
	free(copy);
	splitted = malloc(sizeof(char *) * (words + 1));
	if (!splitted)
	{
		free(command);
		return (NULL);
	}
	part = strtok(command, "\n\t ");
	while (part)
	{
		splitted[i++] = copy_string(part);
		part = strtok(NULL, "\n\t ");
	}
	splitted[i] = NULL;
	free(command);
	return (splitted);
}

