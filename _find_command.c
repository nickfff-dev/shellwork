#include "main.h"

/**
  * find_command - the function name
  * @array: parameter of type char **.
  * Return: int .
 */
int find_command(char **array)
{
	char *path_env = get_path_env();
	char *path_env_copy = _strdup(path_env);
	char *token = strtok(path_env_copy, ":");
	char *wath = NULL;
	struct stat st;

	if (path_env == NULL || path_env_copy == NULL)
	{
		perror("Error");
		return (1);
	}
	while (token != NULL)
	{
		wath = build_path(token, array[0]);
		if (wath == NULL)
		{
			free(path_env_copy);
			return (1);
		}
		if (stat(wath, &st) == 0)
		{
			if (_runs_command(wath, array) == 0)
			{
				free(path_env_copy);
				return (0);
			}
			else
			{
				free(path_env_copy);
				return (1);
			}
		}
			free(wath);
			token = strtok(NULL, ":");
	}
	free(path_env_copy);
	return (1);
}
