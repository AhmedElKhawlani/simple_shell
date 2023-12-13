#include "simple_shell.h"

/**
 * str_length - counts the number of characters in a string.
 * @str: a '\0' terminated string.
 * Return: String length if Success, -1 if str is NULL.
*/

int str_length(const char *str)
{
	int len = 0;

	if (!str)
		return (-1);
	while (str[len] != '\0')
		len++;
	return (len);
}
