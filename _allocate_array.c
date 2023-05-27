#include "main.h"

/**
  * allocate_array - the function name
  * @count: parameter of type int .
  * Return: char **.
 */
char **allocate_array(int count)
{
	char **array = malloc(sizeof(char *) * (count + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	array[count] = NULL;
	return (array);
}
