#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len) {
  size_t sub_len;

  sub_len = ft_strlen(little);

  if (!sub_len)
    return (char *)big;

  while (*big && len >= sub_len) {
    if (*big == *little && !ft_strncmp(big, little, sub_len))
      return (char *)big;
    big++;
    len--;
  }
  return NULL;
}
