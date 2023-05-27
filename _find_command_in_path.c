/**
 * find_command_in_path - finds a command in a single directory listed in the token environment variable
 * @token: a directory in the token environment variable
 * @array: an array of strings containing the command and its arguments
 *
 * Return: 0 if the command is found, 1 otherwise
 */
int find_command_in_path(char *token, char **array)
{
    struct stat st;
    char *wath;

    wath = build_path(token, array[0]);
    if (wath == NULL)
        return (1);
    
    if (stat(wath, &st) == 0)
    {
        if (_runs_command(wath, array) == 0)
        {
            
            return (0);
        }
        else
        {
           
            return (1);
        }
    }
    else
    {
        free(wath);
        return (1);
    }
}