#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len) {
  unsigned const char *s;
  unsigned char *d;
  size_t i;

  i = 0;
  s = src;
  d = dest;
  if (d > s) {
    while (len-- > 0) {
      d[len] = s[len];
    }
  } else {
    while (i < len) {
      d[i] = s[i];
      i++;
    }
  }
  return dest;
}
