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
		printf("$ ");
		line = read_line();
		if (line == NULL)
		{ 
			continue;
		}
		array = spltstr(line);
		if (array[0] == NULL)
		{
			free(line);
			free_array(array);
			continue;
		}
		status = execute_command(array);
		if (status == 1)
		{	
			fprintf(stderr, "hsh: %s: command not found\n", array[0]);
			free(line);
			free_array(array);
		}
	}
	return (0);
}
