#include "main.h"


/**
 * execute_path_commands - executes commands in the PATH environment variable
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */
int execute_path_commands(char **array)
{
    if (find_command(array) == 0)
    { 
		return (0);
	}
    free(array);
    return (1);
}