#include "libft.h"
#include <stdlib.h>

//@Return
// a pointer to a new string which is a duplicate of the string s.

char *ft_strdup(const char *s)
{
	char  *ptr;
	size_t len;

	if (s == NULL)
	{
		return NULL;
	}

	len = ft_strlen(s) + 1;
	ptr = (char *) malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return NULL;
	}

	(void) ft_strlcpy(ptr, s, len);

	return ptr;
}
