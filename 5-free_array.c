#include "simple_shell.h"

/**
 * free_array - frees a 2D string array.
 * @to_free: array of strings to free.
*
*/

void free_array(char **to_free)
{
	int i = 0;

	if (!to_free)
		return;
	while (to_free[i])
	{
		free(to_free[i]);
		i++;
	}
	free(to_free);
}

