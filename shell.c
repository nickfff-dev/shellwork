#include "main.h"

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	char *line = NULL;
	char **array = NULL;
	int status = 0;

	while (1)
	{
		line = read_line();
		if (line[0] == '\0')
		{
			free(line);
			exit(0);
		}
		array = spltstr(line);
		if (array[0] == NULL)
		{
			free(line);
			free_array(array);
		}
		status = execute_command(array, line);
		if (status == 1)
		{
			fprintf(stderr, "hsh: %s: command not found\n", array[0]);
		}
		else if (status == 2)
		{
			free(line);
			free_array(array);
		}
		free(line);
		free_array(array);
	}
	return (0);
}
