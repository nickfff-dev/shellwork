#include "main.h"


/**
 * allocate_array - allocates an array of strings
 * @count: the number of strings to allocate
 *
 * Return: a pointer to the allocated array
 */
char **allocate_array(int count)
{
    char **array = malloc(sizeof(char *) * (count + 1));
    if (array == NULL)
        return (NULL);
    array[count] = NULL;
    return (array);
}
