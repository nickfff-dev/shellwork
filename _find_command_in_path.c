#include "main.h"

/**
  * find_command_in_path - the function name
  * @token: parameter of type char *.
  * @array: parameter of type char **.
  * Return: int .
 */
int find_command_in_path(char *token, char **array)
{
	struct stat st;
	char *wath;

	wath = build_path(token, array[0]);
	if (wath == NULL)
	{
		return (1);
	}
	if (stat(wath, &st) == 0)
	{
		if (_runs_command(wath, array) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		free(wath);
		return (1);
	}
}
