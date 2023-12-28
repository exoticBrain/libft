#include "libft.h"

/*
 * ft_strlen - Calculates the length of a string.
 * @param str: The input string.
 * @return: The length of the string.
 */
int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}
