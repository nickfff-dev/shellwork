#include "main.h"
/**
* execute_external_command - executes an external command
* @array: array of arguments
* Return: 0 on success, 1 on failure
*/
int execute_external_command(char *line, char **array,char **argv,int cmdnum)
{
	int status = 0;
	struct stat *st;

	st = malloc(sizeof(struct stat));
	if (stat(array[0], st) == -1)
	{

		free(st);
		_print_f("%s: %d: %s: No such file or directory\n", argv[0], cmdnum, array[0]);
		return (1);	
	}
	_executor(line, array,argv,cmdnum,st, status);
	
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
	return (status);
}



