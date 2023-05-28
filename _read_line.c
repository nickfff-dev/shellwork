#include "main.h"
/**
* read_line - reads a line from stdin
* Return: pointer to the line
*/
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");
	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		free(line);
		exit(1);
	}
	if (line[0] == '\n')
	{
		free(line);
		exit(0);
	}
		if (line[nread - 1] == '\n')
		{
			line[nread - 1] = '\0';
			--nread;
		}
		return (line);
}
