#include "main.h"

/**
 * get_word_length - gets the length of a word in a string
 * @str: the string to get the word length from
 * @start: the starting index of the word
 * Return: the length of the word
 */
int get_word_length(char *str, int start)
{
    int i = 0;
    int length = 0;

    for (i = start; str[i] != ' ' && str[i] != '\0'; i++)
        length++;
    return (length);
}
