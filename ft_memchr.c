#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  unsigned const char *ptr;

  ptr = s;
  while (*ptr && n-- > 0) {
    if (*ptr == (unsigned char)c)
      return (void *)(ptr);
    ptr++;
  }
  return NULL;
}
