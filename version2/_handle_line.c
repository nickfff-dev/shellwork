#include "main.h"


int handle_line(char *line, int num_tokens, char **argv, int cmdnum)
{
    char **array = NULL, *otherstr = NULL, *thirdstr = NULL, **array2 = NULL;
    int x = 0, status = 0;

    array = malloc(sizeof(char *) * (num_tokens));
    if (array == NULL)
    {
        perror("Error: ");
        return (1);
    }
    otherstr = _strdup(line);
    thirdstr = strtok(otherstr, " \t\r\n\f\v");
    if (thirdstr == NULL)
    {
        free(array);
        free(line);
        free(otherstr);
        return (0);
    }

    for (; thirdstr != NULL; thirdstr = strtok(NULL, " \t\r\n\f\v"))
    {
        array[x++] = thirdstr;
    }
    array2 = malloc(sizeof(char *) * (num_tokens + 1));

    if (array2 == NULL)
    {
        perror("Error: ");
        free(line);
        free(array);
        free(otherstr);
        return (1);
    }
    for (x = 0; x < num_tokens; x++)
    {
        array2[x] = _strdup(array[x]);
    }

    array2[x] = NULL;

    status = execute_external_command(array2, argv, cmdnum);
    free(line);
    free(array);
    free_array(array2);
    free (otherstr);

    return (status);

   

}