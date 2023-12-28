#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char  *str;

	if (s == NULL)
	{
		return NULL;
	}

	str = ft_calloc(ft_strlen(s), sizeof(char));
	i = 0;

	if (s == NULL)
	{
		return NULL;
	}
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}

	return str;
}
