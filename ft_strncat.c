#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t d_len;

	d_len = ft_strlen(dest);
	while (*src && n-- > 0)
		dest[d_len++] = *src++;
	dest[d_len] = '\0';

	return dest;
}
