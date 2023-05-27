#include "main.h"

/**
 * build_path - builds the path to a command
 * @token: token from the PATH environment variable
 * @command: command to execute
 * Return: path to the command
 */
char *build_path(char *token, char *command)
{
    char *path = NULL;
    int token_len = 0;
    int command_len = 0;


    token_len = _strlen(token);
    command_len = _strlen(command);

    path = malloc(sizeof(char) * (token_len + command_len + 2));
    if (path == NULL)
    {   
        free(path);
        return (NULL);
    }

    path = _strcat(path, token);
    path = _strcat(path, "/");
    path = _strcat(path, command);
    
    if (path == NULL)
    {
        free(path);
        free(command);
        return (NULL);
    }
    return (path);
}