#include "main.h"
/**
 * find_command - finds a command in the PATH environment variable
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */

int find_command(char **array)
{
    char *path_env = NULL;
    char *path_env_copy = NULL;
    char *token = NULL;
    char *path = NULL;
    struct stat st;
    
    
    path_env = get_path_env();
    if (path_env == NULL)
	{
		perror("Error");
		return (1);
	}
    path_env_copy = _strdup(path_env);
    if (path_env_copy == NULL)
	{
		perror("Error");

        free(path_env_copy);
		return (1);
	}
    token = strtok(path_env_copy, ":");
    while (token != NULL)
    {
        path = build_path(token, array[0]);

        if (path == NULL)
        {
            free(path_env_copy);
            return (1);
        }

        if (stat(path, &st) == 0)
        {
            if (_runs_command(path, array) == 0)
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
        else{
            free(path);
            token = strtok(NULL, ":");   
            continue;
        }  
    }
    free(path_env_copy);
    return (1);
}