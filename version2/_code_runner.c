#include "main.h"

int _executor(char *line, char **array,char **argv,int cmdnum, struct stat *st, int status)
{
    pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		free(st);
		free_array(array);
		free(line);
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(array[0], array, environ) == -1)
		{
			free(st);
			_print_f("%s: %d: %s: not found\n", argv[0], cmdnum, array[0]);
			free_array(array);
			free(line);
			_exit(-1);
		}

	}
	else
	{
	while (waitpid(-1, &status, 0) != child_pid)
		;
	}
	return (0);
}