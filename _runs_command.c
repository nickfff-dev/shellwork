#include "main.h"
/**
 * _runs_command - executes a command
 * @path: path to the command
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */
int _runs_command(char *path, char **array)
{
    int status = 0;
    pid_t child_pid;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        exit(1);
    }
    if (child_pid == 0)
    {
        if (execve(path, array, environ) == -1)
        {
            perror("Error");
            exit(1);
        }
    }
    else
    {
        wait(&status);
        free(array);
        free(path);
        return (0);
    }
    return (1);
}