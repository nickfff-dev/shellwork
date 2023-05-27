#include "main.h"



int main(void)
{
	char *line = NULL;
	char **array = NULL;
	int status = 0;

	while (1)
	{
		printf("$ ");
		line = read_line();
		array = spltstr(line);
		if (array[0] == NULL)
		{  
			perror("Error");
			free(line);
			free(array);
			continue;
		}
		
		status = execute_command(array);
		if (status == 1)
		{
			perror("Error");
			
			free(line);
			continue;
		}
	}
	return (0);
}











































