#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to first occurence of c in s, or NULL if not found
 */


char *_strchr(char *s, char c)
{
        int i = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == c)
                {
                        return (s + i);
                }
        }
        if (s[i] == c)
        {
                return (s + i);
        }
        return (NULL);
}
