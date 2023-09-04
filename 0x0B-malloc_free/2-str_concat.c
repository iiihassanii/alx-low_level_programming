#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 *
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return : pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, r;

	i = 0, j = 0;
	if (s1 == NULL)
	{
		i = -1;
	}
	else
		for (i; s1[i] != '\0'; i++)
			;
	if (s2 == NULL)
	{
		j = -1;
	}
	else
		for (j; s2[j] != '\0'; j++)
			;

	ptr = malloc((sizeof(char) * (i + j)) +1);
	if (i == -1)
		ptr[0] = "";
	else
		for (k = 0; k < i; k++)
			ptr[k] = s1[k];
	if (j == -1)
		ptr[k + 1] = "";
	else
		for (i = 0; i < j; i++)
		{
			ptr[k] = s2[i];
			k++;
		}
	return (ptr);
}
