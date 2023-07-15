#include "main.h"


int _pr_str(va_list *args)
{
	int j = 0;
	char *array;

	array = va_arg(*args, char *);
	while (*array != '\0')
	{
		_putchar(*array);
		j++;
		array++;
	}
	return (j);
}