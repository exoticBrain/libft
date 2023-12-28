#include "libft.h"

int ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f')
		return 1;
	return 0;
}
