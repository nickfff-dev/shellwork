#include "main.h"

/**
 * _strncmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * @n: number of bytes to compare
 *
 * Return: 0 if strings are equal, otherwise the difference
 * between the first two differing bytes
 */

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
