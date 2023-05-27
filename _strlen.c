#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
        int i = 0;

        for (i = 0; s[i] != '\0'; i++)
                ;
        return (i);
}
