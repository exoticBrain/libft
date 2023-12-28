#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (--len > 0)
	{
		if (s[len] == (unsigned char) c)
		{
			return (char *) (s + len);
		}
	}
	return NULL;
}
