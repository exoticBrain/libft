#include "libft.h"

//@Return
// The new string. NULL if the allocation fails.
//@Description Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation of ’s1’ and ’s2’.
char *ft_strjoin(char const *s1, char const *s2) {
  char *ptr = NULL;
  size_t s1_len;
  size_t s2_len;
  size_t total_len;

  if (s1 == NULL || s2 == NULL) {
    return NULL;
  }

  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);
  total_len = s1_len + s2_len + 1;

  ptr = ft_calloc(total_len, sizeof(char));
  if (ptr == NULL) {
    return NULL;
  }

  ft_strlcpy(ptr, s1, s1_len);
  ft_strlcpy(ptr + s1_len, s2, s2_len);

  return ptr;
}
