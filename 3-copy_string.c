#include "simple_shell.h"

/**
 * copy_string - makes a copy of a string.
 * @str: string to copy
 * Return: Pointer to the copied string if success, NULL in fail
*/

char *copy_string(const char *str)
{
	int len;
	int i = 0;
	char *copied = NULL;

	len = str_length(str);
	if (len == -1)
		return (NULL);
	copied = malloc(sizeof(char) * (len + 1));
	if (!copied)
	{
		return (NULL);
	}
	while (i <= len)
	{
		copied[i] =  str[i];
		i++;
	}
	return (copied);
}

