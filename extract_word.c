#include "main.h"
/**
 * extract_word - extracts a word from a string
 * @str: the string to extract from
 * @start: the starting index of the word
 * @end: the ending index of the word
 * Return: a pointer to the extracted word
 */
char *extract_word(char *str, int start, int end)
{
	int i, j;
	char *word;

	word = malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
	{
		return (NULL);
	}
	for (i = start, j = 0; i <= end; i++, j++)
	{
		word[j] = str[i];
	}
	word[j] = '\0';
	return (word);
}
