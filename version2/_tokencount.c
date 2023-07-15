#include "main.h"


int _count_token(char *line)
{
    int count = 0, isSpace = 1, x;
    
    for (x = 0; line[x]; x++)
    {

        if (line[x] == ' ' || line[x] == '\t' || line[x] == '\n')
        {
            isSpace = 1;
        }
        else if (isSpace == 1)
        {
            isSpace = 0;
            count++;
        }
    }
    return (count);

    }