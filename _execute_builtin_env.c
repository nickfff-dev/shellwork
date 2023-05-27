#include "main.h"
/**
 * execute_builtin_command - executes a builtin command
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */
int execute_builtin_env(void)
{
    char **env;
    int i = 0;
    int j = 0;
	env = environ;
	for (i = 0; env[i] != NULL; i++)
	{
		for (j = 0; env[i][j] != '\0'; j++)
		{
			_putchar(env[i][j]);
		}
		_putchar('\n');
	}
	return (0);
	
}