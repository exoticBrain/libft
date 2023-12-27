#include "libft.h"

static int is_trim(int c, char const *set) {
  while (*set) {
    if (*set == (unsigned char)c) {
      return 1;
    }
    set++;
  }
  return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
  size_t i;
  size_t len;
  size_t size;
  char *ptr;

  if (s1 == NULL) {
    return NULL;
  }

  i = 0;
  len = ft_strlen(s1);
  while (is_trim(s1[i], set)) {
    i++;
  }

  while (is_trim(s1[len - 1], set)) {
    len--;
  }

  size = len - i;
  ptr = ft_calloc(size + 1, sizeof(char));
  if (ptr == NULL) {
    return NULL;
  }
  ft_strlcpy(ptr, s1 + i, size);

  return ptr;
}
