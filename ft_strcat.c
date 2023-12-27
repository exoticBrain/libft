#include "libft.h"

char *ft_strcat(char *dest, const char *src) {
  size_t d_len;

  d_len = ft_strlen(dest);
  while (*src)
    dest[d_len++] = *src++;
  dest[d_len] = '\0';

  return dest;
}
