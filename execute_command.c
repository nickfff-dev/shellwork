#include "main.h"

/**
  * execute_command - the function name
  * @array: parameter of type char **.
  * Return: int .
 */
int execute_command(char **array, char *line)
{
	int status = 0;

	if (array[0][0] == '/')
	{
		status = execute_external_command(array);
		
		return (status);
	}
	if (_strcmp(array[0], "env") == 0)
	{
		status = execute_builtin_env();
		
		return (status);
	}
	if (_strcmp(array[0], "exit") == 0)
	{
		free_array(array);
		free(line);
		exit(0);
	}
	status = execute_path_commands(array);
	return (status);
}
