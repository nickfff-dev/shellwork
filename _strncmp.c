#include "main.h"

int _strncmp(const char *s1, const char *s2, size_t n)
{
        size_t i = 0;

        for (i = 0; i < n && s1[i] && s2[i]; i++)
        {
                if (s1[i] != s2[i])
                {
                        return (s1[i] - s2[i]);
                }
        }
        if (i != n)
        {
                return (s1[i] - s2[i]);
        }
        return (0);
}
