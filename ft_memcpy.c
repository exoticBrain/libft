#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char *p1;
	unsigned char       *p2;
	size_t               i;

	p1 = src;
	p2 = dest;

	if (p2 > p1)
	{
		while (n-- > 0)
		{
			p2[n] = p1[n];
		}
	}
	else
	{
		while (i < n)
		{
			p2[i] = p1[i];
			i++;
		}
	}
	return dest;
}
