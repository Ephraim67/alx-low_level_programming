#include "main.h"

/**
 * _strcmp - compare string value
 * @s1: input values
 * @s2: input values
 *
 * Return:s1[1] - s2[1]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i =0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}

	return (0);

}

					
