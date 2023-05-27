#include "main.h"

/**
 * build_path - builds the path to a command
 * @token: token from the PATH environment variable
 * @command: command to execute
 * Return: path to the command
 */
char *build_path(char *token, char *command)
{
    int token_len = _strlen(token);
    int j;
    int i;
    int command_len = _strlen(command);
    char *path = malloc(sizeof(char) * (token_len + command_len + 2));

    if (path == NULL)
    {
        free(path);
        return NULL;
    }

    for (i = 0; i < token_len; i++)
    {
        path[i] = token[i];
    }
    path[i++] = '/';
    
    for (j = 0; j < command_len; j++, i++)
    {
        path[i] = command[j];
    }
    path[i] = '\0';

    return path;
}
