#include "main.h"

/**
  * execute_command - the function name
  * @array: parameter of type char **.
  * Return: int .
 */
int execute_command(char **array)
{
	int status = 0;

	if (array[0][0] == '/')
	{
		status = execute_external_command(array);
		free(array);
		return (status);
	}
	if (_strcmp(array[0], "env") == 0)
	{
		status = execute_builtin_env();
		free(array);
		return (status);
	}
	if (_strcmp(array[0], "exit") == 0)
	{
		free(array);
		exit(0);
	}
	status = execute_path_commands(array);
	free(array);
	return (status);
}
