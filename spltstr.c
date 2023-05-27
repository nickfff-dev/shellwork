#include "main.h"
/**
 * spltstr - splits a string into an array of words
 * @str: the string to split
 *
 * Return: an array of words
 */
char **spltstr(char *str)
{
    int i, j, count, word_length;
    char **array;

    if (str == NULL || *str == '\0')
        return (NULL);
    count = count_words(str);
    array = allocate_array(count);
    if (array == NULL)
        return (NULL);
    for (i = 0, j = 0; i < count; i++, j++)
    {
        while (str[j] == ' ')
            j++;
        word_length = get_word_length(str, j);
        array[i] = extract_word(str, j, j + word_length - 1);
        if (array[i] == NULL)
        {
            free_array(array);
            return (NULL);
        }

        j += word_length;
    }

    return (array);
}
