#include "main.h"
/**
* execute_external_command - executes an external command
* @array: array of arguments
* Return: 0 on success, 1 on failure
*/
int execute_external_command(char **array,char **argv,int cmdnum)
{
	int status;
	pid_t child_pid;
	struct stat *st;

	st = malloc(sizeof(struct stat));
	if (stat(array[0], st) == -1)
	{
		free(st);
		_print_f("%s: %d: %s: No such file or directory\n", argv[0], cmdnum, array[0]);
		return (0);	
	}
	child_pid = fork();
	if (child_pid == -1)
	{
		free(st);
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(array[0], array, environ) == -1)
		{
			free(st);
			free_array(array);
			_print_f("%s: %d: %s: not found\n", argv[0], cmdnum, array[0]);
			_exit(-1);
		}
	}
	else
	{
	while (waitpid(-1, &status, 0) != child_pid)
		;
	}
	
	free(st);
	if(status == 0)
	{
		errno = 0;
	}
	if (status == 512)
	{
		errno = 2;
	}
	if (status == 65280)
	{
		errno = 127;
	}

	return (0);
}
