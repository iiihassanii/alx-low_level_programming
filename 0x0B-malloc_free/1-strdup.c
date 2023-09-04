#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  allocated space in memory
 *
 * @str : pointer
 *
 * Return: pointert to
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i ; j++)
		ptr[j] = str[j];
	return (ptr);
}
