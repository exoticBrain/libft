#include "libft.h"

//@Param
// s: The string from which to create the substring.
// start: The start index of the substring in the string ’s’.
// len: The maximum length of the substring.
//@Return
// The substring. NULL if the allocation fails.
//@Descrip
// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
char *ft_substr(char const *s, unsigned int start, size_t len) {
  char *ptr = NULL;

  ptr = malloc(len + 1);
  if (ptr == NULL) {
    return NULL;
  }
  ft_memcpy(ptr, (s + start), len);
  *(ptr + len) = '\0';

  return (char *)ptr;
}
