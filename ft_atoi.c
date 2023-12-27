#include "libft.h"

int ft_atoi(const char *ptr)
{
	int sign;
	int number;

	sign = 1;
	number = 0;
	if (ptr == NULL)
		return number;

	while (ft_isspace(*ptr))
	{
		ptr++;
	}

	while (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}

	while (ft_isdigit(*ptr))
	{
		number *= 10;
		number += (*ptr - '0');
		ptr++;
	}
	return (number * sign);
}
