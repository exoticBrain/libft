#include "libft.h"

/*
** Function name: ft_itoa
** Prototype:    char *ft_itoa(int n);
** Turn in files: -
** Parameters:
**   - n: the integer to convert.
** Return value:
**   - The string representing the integer.
**   - NULL if the allocation fails.
** External functions: malloc
** Description:
**   Allocates (with malloc(3)) and returns a string
**   representing the integer received as an argument.
**   Negative numbers are handled.
*/

#define SIGN_PLACE_HOLDER 1

int countDigits(int n, int *sign)
{
	int count = 0;

	// Handle the case when n is 0 separately
	if (n == 0)
	{
		return 1;
	}

	// For negative numbers, make them positive for counting purposes
	if (n < 0)
	{
		n = -n;
		*sign = -1;
	}

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return count;
}

void fill_in_digits(char *str, int n, int len)
{
	while (n != 0 && len > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}
char *ft_itoa(int n)
{
	int   sign;
	char *str;
	int   number_of_digits;

	str = NULL;
	sign = 1;
	number_of_digits = countDigits(n, &sign);

	if (sign == -1)
	{
		n = -n;
		number_of_digits = number_of_digits + SIGN_PLACE_HOLDER;
		str = ft_calloc(number_of_digits + 1, sizeof(char));

		if (str == NULL)
		{
			return NULL;
		}

		str[0] = '-';
		fill_in_digits(str, n, number_of_digits);
	}
	else
	{
		str = ft_calloc(number_of_digits + 1, sizeof(char));

		if (str == NULL)
		{
			return NULL;
		}

		fill_in_digits(str, n, number_of_digits);
	}
	return (char *) str;
}
