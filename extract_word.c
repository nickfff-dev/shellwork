#include "main.h"

/**
 * extract_word - extracts a word from a string
 * @str: the string to extract from
 * @start: the starting index of the word
 * @end: the ending index of the word
 *
 * Return: a pointer to the extracted word
 */
char *extract_word(char *str, int start, int end)
{
    char *word = malloc(sizeof(char) * (end - start + 2));
    if (word == NULL)
        return (NULL);
    strncpy(word, &str[start], end - start + 1);
    word[end - start + 1] = '\0';
    return (word);
}