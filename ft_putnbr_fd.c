#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *number = NULL;

	number = ft_itoa(n);
	if (number == NULL)
	{
		return;
	}

	ft_putstr_fd(number, fd);

	free(number);
    number = NULL;
}
