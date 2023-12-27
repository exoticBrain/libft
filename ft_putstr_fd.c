#include "libft.h"

//@Description Outputs the string ’s’ to the given file
// descriptor.
void ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
