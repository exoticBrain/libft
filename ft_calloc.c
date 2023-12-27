#include "libft.h"

//@Return
// a pointer to the allocated memory, or NULL on error
// @Description
// The calloc() function allocates memory for an array of nmemb elements of size
// bytes each and returns a pointer to the allocated  memory.   The  memory is
// set to zero.

void *ft_calloc(size_t nmemb, size_t size) {
  if (!nmemb || !size) {
    return NULL;
  }

  // Check for overflow
  if (nmemb > 0 && SIZE_T_MAX / nmemb < size) {
    return NULL;
  }

  size_t total_size = nmemb * size;

  // Check for overflow
  if (total_size > SIZE_T_MAX) {
    return NULL;
  }

  void *ptr;

  ptr = malloc(total_size);
  // Check if allocation was successful
  if (ptr == NULL) {
    return NULL;
  }
  ft_bzero(ptr, total_size);

  return ptr;
}
