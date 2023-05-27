#include "main.h"
/**
 * find_command - finds a command in the directories listed in the PATH environment variable
 * @array: an array of strings containing the command and its arguments
 *
 * Return: 0 if the command is found, 1 otherwise
 */

int find_command(char **array)
{
    char *path_env = get_path_env();
    char *path_env_copy = _strdup(path_env);
    char *token = strtok(path_env_copy, ":");
    if (path_env == NULL || path_env_copy == NULL)
    {
        perror("Error");
        return (1);
    }
    while (token != NULL)
    {
        if (find_command_in_path(token, array) == 0)
        {
            free(path_env_copy);
            return (0);
        }
        token = strtok(NULL, ":");
    }
    free(path_env_copy);
    return (1);
}
