#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t         i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}

	return s;
}
