#include "libft.h"

// @Return
// the length of src
// @Description
// strlcpy() copies	up to dstsize -	1 characters
// from the  string  src  to dst, NUL-terminating the
// result if dstsize is not 0.

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  size_t i;
  size_t src_len;

  i = 0;
  src_len = ft_strlen(src);
  while (i < dstsize) {
    dst[i] = src[i];
    i++;
  }
  if (dstsize != 0) {
    dst[i] = '\0';
  }
  return src_len;
}
