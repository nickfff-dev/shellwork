#include "main.h"

char *_getenv( char *name)
{
    int i = 0;
    int len = 0;
    char *env = NULL;
    char *env_name = NULL;
    char *env_value = NULL;

    len = _strlen(name);
    for (i = 0; environ[i] != NULL; i++)
    {
        env = environ[i];
        env_name = env;
        env_value = _strchr(env, '=');
        if (env_value == NULL)
        {
            continue;
        }
        if (_strncmp(env_name, name, len) == 0)
        {
            return (env_value + 1);
        }
    }
    return (NULL);
}
