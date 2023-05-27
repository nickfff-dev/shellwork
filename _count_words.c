#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 * Return: the number of words in the string
 */
int count_words(char *str)
{
    int i = 0;
    int count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }
    return (count);
}